/*
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <MyGameState.h>

#include <Camera.h>
#include <CameraEffectManager.h>
#include <I18n.h>
#include <Languages.h>
#include <Printer.h>
#include <Singleton.h>
#include <VIPManager.h>
#include <VUEngine.h>

#include <string.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern StageROMSpec MyGameStageSpec;
extern const uint32 AlignmentCheckButtonSequence[__PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::enter(void* owner __attribute__((unused)))
{
	Base::enter(this, owner);

	// Reset last button inputs
	MyGameState::resetLastInputs(this);

	// Load stage
	GameState::configureStage(GameState::safeCast(this), (StageSpec*)&MyGameStageSpec, NULL);

	// Start clocks to start animations
	GameState::startClocks(GameState::safeCast(this));

	// Print text
	MyGameState::print(this);

	// Enable user input
	KeypadManager::enable();

	// Start fade in effect
	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect(
		Camera::getInstance(),
		kFadeTo,	   // effect type
		0,			   // initial delay (in ms)
		NULL,		   // target brightness
		__FADE_DELAY,  // delay between fading steps (in ms)
		NULL		   // callback scope
	);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::suspend(void* owner)
{
	Camera::startEffect(Camera::getInstance(), kFadeOut, __FADE_DELAY);

	Base::suspend(this, owner);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::resume(void* owner)
{
	Base::resume(this, owner);

	// Reset last button inputs
	MyGameState::resetLastInputs(this);

	// Print text
	MyGameState::print(this);

	// Enable user input
	KeypadManager::enable();

	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect(
		Camera::getInstance(),
		kFadeTo,	   // effect type
		0,			   // initial delay (in ms)
		NULL,		   // target brightness
		__FADE_DELAY,  // delay between fading steps (in ms)
		NULL		   // callback scope
	);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::processUserInput(const UserInput* userInput)
{
	if(userInput->pressedKey & ~K_PWR)
	{
		MyGameState::recordLastInput(this, userInput);
		MyGameState::matchButtonCode(this);
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::constructor()
{
	// Always explicitly call the base's constructor
	Base::constructor();

	MyGameState::resetLastInputs(this);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::resetLastInputs()
{
	for(uint8 i = 0; i < __PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH; i++)
	{
		this->lastInputs[i] = 0;
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::recordLastInput(const UserInput* userInput)
{
	for(uint8 i = 0; i < (__PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH - 1); i++)
	{
		this->lastInputs[i] = this->lastInputs[i + 1];
	}
	this->lastInputs[__PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH - 1] = userInput->pressedKey;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::matchButtonCode()
{
	uint8 numberOfMatchingButtons = 0;

	for(uint8 i = 0; i < __PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH; i++)
	{
		numberOfMatchingButtons += (AlignmentCheckButtonSequence[i] == this->lastInputs[i]);
	}

	if(numberOfMatchingButtons == __PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH)
	{
		VUEngine::pause(GameState::safeCast(AlignmentCheckScreenState::getInstance()));
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void MyGameState::print()
{
	const char* strYourGameHere = I18n::getText(I18n::getInstance(), kStringYourGameHere);

	FontSize textSize = Printer::getTextSize(strYourGameHere, "VirtualBoyExt");

	Printer::text(strYourGameHere, (__SCREEN_WIDTH >> 4) - (textSize.x >> 1), 12, "VirtualBoyExt");
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
