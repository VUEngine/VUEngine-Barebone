/*
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <string.h>

#include <Camera.h>
#include <CameraEffectManager.h>
#include <I18n.h>
#include <Languages.h>
#include <Printer.h>
#include <Singleton.h>
#include <VIPManager.h>
#include <VUEngine.h>

#include "MyGameState.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern StageROMSpec MyGameStageSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::enter(void* owner __attribute__((unused)))
{
	Base::enter(this, owner);

	// Load stage
	MyGameState::configureStage(this, (StageSpec*)&MyGameStageSpec, NULL);

	// Start clocks to start animations
	MyGameState::startClocks(this);

	// Print text
	MyGameState::print(this);

	// Enable user input
	KeypadManager::enable();

	// Start fade in effect
	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect
	(
		Camera::getInstance(),
		kFadeTo,	   // effect type
		0,			   // initial delay (in ms)
		NULL,		   // target brightness
		__FADE_DELAY,  // delay between fading steps (in ms)
		NULL		   // callback scope
	);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::suspend(void* owner)
{
	Camera::startEffect(Camera::getInstance(), kFadeOut, __FADE_DELAY);

	Base::suspend(this, owner);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::resume(void* owner)
{
	Base::resume(this, owner);

	// Print text
	MyGameState::print(this);

	// Enable user input
	KeypadManager::enable();

	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect
	(
		Camera::getInstance(),
		kFadeTo,	   // effect type
		0,			   // initial delay (in ms)
		NULL,		   // target brightness
		__FADE_DELAY,  // delay between fading steps (in ms)
		NULL		   // callback scope
	);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::constructor()
{
	// Always explicitly call the base's constructor
	Base::constructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::print()
{
	const char* strYourGameHere = I18n::getText(I18n::getInstance(), kStringYourGameHere);

	FontSize textSize = Printer::getTextSize(strYourGameHere, "VirtualBoyExt");

	Printer::text(strYourGameHere, (__SCREEN_WIDTH >> 4) - (textSize.x >> 1), 12, "VirtualBoyExt");
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
