/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <MyGameState.h>

#include <Camera.h>
#include <CameraEffectManager.h>
#include <I18n.h>
#include <Languages.h>
#include <Printing.h>
#include <VUEngine.h>
#include <VIPManager.h>

#include <string.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMSpec MyGameStage;


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

// class's constructor
void MyGameState::constructor()
{
	Base::constructor();
}

// class's destructor
void MyGameState::destructor()
{
	// destroy base
	Base::destructor();
}

// state's enter
void MyGameState::enter(void* owner __attribute__ ((unused)))
{
	// call base
	Base::enter(this, owner);

	// load stage
	GameState::loadStage(GameState::safeCast(this), (StageSpec*)&MyGameStage, NULL, true, false);

	// start clocks to start animations
	GameState::startClocks(GameState::safeCast(this));

	// print text
	MyGameState::print(this);

	// enable user input
	VUEngine::enableKeypad(VUEngine::getInstance());

	// start fade in effect
	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect(Camera::getInstance(),
		kFadeTo, // effect type
		0, // initial delay (in ms)
		NULL, // target brightness
		__FADE_DELAY, // delay between fading steps (in ms)
		NULL, // callback function
		NULL // callback scope
	);
}

void MyGameState::suspend(void* owner)
{
	if(!VUEngine::isInSpecialMode(VUEngine::getInstance()))
	{
		// do a fade out effect
		Camera::startEffect(Camera::getInstance(), kFadeOut, __FADE_DELAY);
	}

	// call base
	Base::suspend(this, owner);
}

void MyGameState::resume(void* owner)
{
	// call base
	Base::resume(this, owner);

	// print text
	MyGameState::print(this);

	if(!VUEngine::isInSpecialMode(VUEngine::getInstance()))
	{
		// start a fade in effect
		Camera::startEffect(Camera::getInstance(), kHide);
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

void MyGameState::print()
{
	const char* strYourGameHere = I18n::getText(I18n::getInstance(), kStringYourGameHere);

	FontSize textSize = Printing::getTextSize(Printing::getInstance(), strYourGameHere, "VirtualBoyExt");

	Printing::text(
		Printing::getInstance(),
		strYourGameHere,
		(__SCREEN_WIDTH >> 4) - (textSize.x >> 1),
		12,
		"VirtualBoyExt"
	);
}
