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
#include <HelloWorldScreenState.h>
#include <AdjustmentScreenState.h>
#include <Languages.h>
#include <PostProcessingEffects.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMDef EMPTY_STAGE_ST;


//---------------------------------------------------------------------------------------------------------
// 												PROTOTYPES
//---------------------------------------------------------------------------------------------------------

void HelloWorldScreenState::destructor(HelloWorldScreenState this);
void HelloWorldScreenState::constructor(HelloWorldScreenState this);


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

// class's constructor
void __attribute__ ((noinline)) HelloWorldScreenState::constructor(HelloWorldScreenState this)
{
	Base::constructor();
}

// class's destructor
void HelloWorldScreenState::destructor(HelloWorldScreenState this)
{
	// destroy base
	__SINGLETON_DESTROY;
}

// state's enter
void HelloWorldScreenState::enter(HelloWorldScreenState this, void* owner __attribute__ ((unused)))
{
	// call base
	Base::enter(this, owner);

	// disallow user input
	Game::disableKeypad(Game::getInstance());

	//load stage
	GameState::loadStage(__SAFE_CAST(GameState, this), (StageDefinition*)&EMPTY_STAGE_ST, NULL, true);

	const char* strHelloWorld = I18n::getText(I18n::getInstance(), STR_HELLO_WORLD);
	FontSize textSize = Printing::getTextSize(Printing::getInstance(), strHelloWorld, NULL);

	// print hello world
	Printing::text(
		Printing::getInstance(),
		strHelloWorld,
		(__SCREEN_WIDTH >> 4) - (textSize.x >> 1),
		12,
		NULL
	);

	// add rhombus effect
	VIPManager::pushBackPostProcessingEffect(VIPManager::getInstance(), PostProcessingEffects::wobble, NULL);

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
