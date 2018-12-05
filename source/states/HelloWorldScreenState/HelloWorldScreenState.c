/* VUEngine - Virtual Utopia Engine <http://vuengine.planetvb.com/>
 * A universal game engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007, 2018 by Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <chris@vr32.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <string.h>

#include <Game.h>
#include <VIPManager.h>
#include <Camera.h>
#include <Printing.h>
#include <I18n.h>
#include <Languages.h>
#include <HelloWorldScreenState.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMSpec HELLO_WORLD_STAGE_ST;


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

// class's constructor
void HelloWorldScreenState::constructor()
{
	Base::constructor();
}

// class's destructor
void HelloWorldScreenState::destructor()
{
	// destroy base
	Base::destructor();
}

// state's enter
void HelloWorldScreenState::enter(void* owner __attribute__ ((unused)))
{
	// call base
	Base::enter(this, owner);

	// load stage
	GameState::loadStage(GameState::safeCast(this), (StageSpec*)&HELLO_WORLD_STAGE_ST, NULL, true);

	// start clocks to start animations
	GameState::startClocks(GameState::safeCast(this));

	// print hello world
	HelloWorldScreenState::print(this);

	// add wobble effect
	VIPManager::pushBackPostProcessingEffect(VIPManager::getInstance(), HelloWorldScreenState::wobble, NULL);

	// enable user input
	Game::enableKeypad(Game::getInstance());

	// start fade in effect
	Camera::startEffect(Camera::getInstance(),
		kFadeTo, // effect type
		0, // initial delay (in ms)
		NULL, // target brightness
		__FADE_DELAY, // delay between fading steps (in ms)
		NULL, // callback function
		NULL // callback scope
	);
}

void HelloWorldScreenState::suspend(void* owner)
{
	if(!Game::isEnteringSpecialMode(Game::getInstance()))
	{
		// do a fade out effect
		Camera::startEffect(Camera::getInstance(), kFadeOut, __FADE_DELAY);
	}

	// call base
	Base::suspend(this, owner);
}

void HelloWorldScreenState::resume(void* owner)
{
	// call base
	Base::resume(this, owner);

	// print hello world
	HelloWorldScreenState::print(this);

	// add wobble effect
	VIPManager::pushBackPostProcessingEffect(VIPManager::getInstance(), HelloWorldScreenState::wobble, NULL);

	if(!Game::isExitingSpecialMode(Game::getInstance()))
	{
		// start a fade in effect
		Camera::startEffect(Camera::getInstance(),
			kFadeTo, // effect type
			0, // initial delay (in ms)
			NULL, // target brightness
			__FADE_DELAY, // delay between fading steps (in ms)
			NULL, // callback function
			NULL // callback scope
		);
	}
}

void HelloWorldScreenState::print()
{
	const char* strHelloWorld = I18n::getText(I18n::getInstance(), STR_HELLO_WORLD);
	FontSize textSize = Printing::getTextSize(Printing::getInstance(), strHelloWorld, "VirtualBoyExt");
	Printing::text(
		Printing::getInstance(),
		strHelloWorld,
		(__SCREEN_WIDTH >> 4) - (textSize.x >> 1),
		12,
		"VirtualBoyExt"
	);
}

/**
 * Applies a wobble distortion that is reminiscent of water waves to area that holds text on title.
 *
 * @param currentDrawingFrameBufferSet	The framebuffer set that's currently being accessed
 * @param spatialObject
 */
static void HelloWorldScreenState::wobble(u32 currentDrawingFrameBufferSet, SpatialObject spatialObject __attribute__ ((unused)))
{
	u8 buffer = 0;
	u16 x, y = 0;
	u32 previousSourcePointerValue = 0;

	// runtime working variables
	static u8 waveLutIndex = 0;

	// look up table of bitshifts performed on rows
	// values must be multiples of 2
	const u32 waveLut[64] =
	{
		0, 0, 0, 0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 2,
		4, 4, 4, 4, 4,
		6, 6, 6, 6, 6, 6,
		8, 8, 8, 8, 8, 8, 8,
		8, 8, 8, 8, 8, 8, 8,
		6, 6, 6, 6, 6, 6,
		4, 4, 4, 4, 4,
		2, 2, 2, 2, 2, 2,
		0, 0, 0, 0, 0, 0, 0, 0,
	};

	// loop columns
	for(x = 0; x < 384; x++)
	{
		// increase look up table index, wrap around if necessary
		waveLutIndex += (waveLutIndex < 63) ? 1 : -63;

		// we can skip further processing for the current column if no shifting would be done on it
		if(waveLut[waveLutIndex] == 0)
		{
			continue;
		}

		// write to framebuffers for both screens
		for(buffer = 0; buffer < 2; buffer++)
		{
			// the shifted out pixels on top should be black
			previousSourcePointerValue = 0;

			// loop current column in steps of 16 pixels (32 bits)
			for(y = 6; y < 8; y++)
			{
				// pointer to currently manipulated 32 bits of framebuffer
				u32* sourcePointer = (u32*) (currentDrawingFrameBufferSet | (buffer ? 0x00010000 : 0)) + (x << 4) + y;

				// save current pointer value to temp var and shift highest x bits of it, according to lut,
				// to the lowest bits, since we want to insert these
				u32 sourcePointerCurrentValue = *sourcePointer;
				u32 previousSourcePointerValueTemp = sourcePointerCurrentValue >> (32 - waveLut[waveLutIndex]);

				// manipulate current 32 bits in frame buffer
				*sourcePointer =
					// shift bits according to wave lut
					// it's two bits per pixel, so 2 bits shifted left = 1 pixel shifted down on screen
					(sourcePointerCurrentValue << waveLut[waveLutIndex])

					// since the above shifting creates black pixels, we need to carry over these pixels
					// from the previous loop
					| previousSourcePointerValue;

				// we need the current source pointer value from _before_ we modified it, therefore we save it
				// it to a temp variable while modifying
				previousSourcePointerValue = previousSourcePointerValueTemp;
			}
		}
	}

	// move the wave one pixel in the next frame
	waveLutIndex++;
}
