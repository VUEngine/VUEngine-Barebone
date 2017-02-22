/* VUEngine - Virtual Utopia Engine <http://vuengine.planetvb.com/>
 * A universal game engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007, 2017 by Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <chris@vr32.de>
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
#include <Screen.h>
#include <Printing.h>
#include <MessageDispatcher.h>
#include <PhysicalWorld.h>
#include <I18n.h>
#include <AutoPauseScreenState.h>
#include <KeyPadManager.h>
#include <Languages.h>
#include <Utilities.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMDef EMPTY_STAGE_ST;


//---------------------------------------------------------------------------------------------------------
// 												PROTOTYPES
//---------------------------------------------------------------------------------------------------------

static void AutoPauseScreenState_destructor(AutoPauseScreenState this);
static void AutoPauseScreenState_constructor(AutoPauseScreenState this);
static void AutoPauseScreenState_enter(AutoPauseScreenState this, void* owner);
static void AutoPauseScreenState_exit(AutoPauseScreenState this, void* owner);
static void AutoPauseScreenState_onUserInput(AutoPauseScreenState this, Object eventFirer);
static void AutoPauseScreenState_onFadeOutComplete(AutoPauseScreenState this, Object eventFirer);
static void AutoPauseScreenState_onFadeInComplete(AutoPauseScreenState this, Object eventFirer);


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

__CLASS_DEFINITION(AutoPauseScreenState, GameState);
__SINGLETON(AutoPauseScreenState);


//---------------------------------------------------------------------------------------------------------
// 												CLASS'S METHODS
//---------------------------------------------------------------------------------------------------------

// class's constructor
static void __attribute__ ((noinline)) AutoPauseScreenState_constructor(AutoPauseScreenState this)
{
	__CONSTRUCT_BASE(GameState);
}

// class's destructor
static void AutoPauseScreenState_destructor(AutoPauseScreenState this)
{
	// destroy base
	__SINGLETON_DESTROY;
}

// state's enter
static void AutoPauseScreenState_enter(AutoPauseScreenState this, void* owner __attribute__ ((unused)))
{
	// load stage
	GameState_loadStage(__SAFE_CAST(GameState, this), (StageDefinition*)&EMPTY_STAGE_ST, NULL, true);

	// print text
	const char* strAutomaticPauseTitle = I18n_getText(I18n_getInstance(), STR_AUTOMATIC_PAUSE);
	const char* strAutomaticPauseTitleFont = "LargeFont";
	const char* strAutomaticPauseText = I18n_getText(I18n_getInstance(), STR_TAKE_A_REST);
	Size strAutomaticPauseSize = Printing_getTextSize(Printing_getInstance(), strAutomaticPauseTitle, strAutomaticPauseTitleFont);
	Size strAutomaticPauseTextSize = Printing_getTextSize(Printing_getInstance(), strAutomaticPauseText, NULL);

	u8 strHeaderXPos = ((__SCREEN_WIDTH >> 4) - (strAutomaticPauseSize.x >> 1));
	Printing_text(
		Printing_getInstance(),
		Utilities_toUppercase(strAutomaticPauseTitle),
		strHeaderXPos,
		14,
		strAutomaticPauseTitleFont
	);

	u8 strTextXPos = (__SCREEN_WIDTH >> 4) - (strAutomaticPauseTextSize.x >> 1);
	Printing_text(Printing_getInstance(), strAutomaticPauseText, strTextXPos, 15 + strAutomaticPauseSize.y, NULL);

	// disable user input
	Game_disableKeypad(Game_getInstance());

	// start clocks to start animations
	GameState_startClocks(__SAFE_CAST(GameState, this));

	// fade in screen
	Screen_startEffect(Screen_getInstance(),
		kFadeTo, // effect type
		0, // initial delay (in ms)
		NULL, // target brightness
		__FADE_DELAY, // delay between fading steps (in ms)
		(void (*)(Object, Object))AutoPauseScreenState_onFadeInComplete, // callback function
		__SAFE_CAST(Object, this) // callback scope
	);
}

// state's exit
static void AutoPauseScreenState_exit(AutoPauseScreenState this __attribute__ ((unused)), void* owner __attribute__ ((unused)))
{
	// remove event listeners
	Object_removeEventListener(__SAFE_CAST(Object, Game_getInstance()), __SAFE_CAST(Object, this), (EventListener)AutoPauseScreenState_onUserInput, kEventUserInput);

	// call base
	GameState_exit(__SAFE_CAST(GameState, this), owner);
}

/**
 * Process user input
 *
 * @memberof			AutoPauseScreenState
 * @private
 *
 * @param this			Function scope
 * @param eventFirer	KeypadManager
 */
static void AutoPauseScreenState_onUserInput(AutoPauseScreenState this __attribute__ ((unused)), Object eventFirer __attribute__ ((unused)))
{
	if(K_STA & KeypadManager_getUserInput(KeypadManager_getInstance()).pressedKey)
	{
		// disable user input
		Game_disableKeypad(Game_getInstance());

		// fade out screen
		Brightness brightness = (Brightness){0, 0, 0};
		Screen_startEffect(Screen_getInstance(),
			kFadeTo, // effect type
			0, // initial delay (in ms)
			&brightness, // target brightness
			__FADE_DELAY, // delay between fading steps (in ms)
			(void (*)(Object, Object))AutoPauseScreenState_onFadeOutComplete, // callback function
			__SAFE_CAST(Object, this) // callback scope
		);
	}
}

// handle event
static void AutoPauseScreenState_onFadeInComplete(AutoPauseScreenState this __attribute__ ((unused)), Object eventFirer __attribute__ ((unused)))
{
	ASSERT(this, "AutoPauseScreenState::onFadeOutComplete: null this");

	// re-enable user input
	Game_enableKeypad(Game_getInstance());

	// add event listeners
	Object_addEventListener(__SAFE_CAST(Object, Game_getInstance()), __SAFE_CAST(Object, this), (EventListener)AutoPauseScreenState_onUserInput, kEventUserInput);
}

// handle event
static void AutoPauseScreenState_onFadeOutComplete(AutoPauseScreenState this __attribute__ ((unused)), Object eventFirer __attribute__ ((unused)))
{
	ASSERT(this, "AutoPauseScreenState::onFadeOutComplete: null this");

	// re-enable user input
	Game_enableKeypad(Game_getInstance());

	// resume game
	Game_unpause(Game_getInstance(), __SAFE_CAST(GameState, this));
}
