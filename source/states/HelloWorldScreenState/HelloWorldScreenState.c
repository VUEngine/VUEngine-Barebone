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

static void HelloWorldScreenState_destructor(HelloWorldScreenState this);
static void HelloWorldScreenState_constructor(HelloWorldScreenState this);
static void HelloWorldScreenState_enter(HelloWorldScreenState this, void* owner);


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

__CLASS_DEFINITION(HelloWorldScreenState, GameState);
__SINGLETON_DYNAMIC(HelloWorldScreenState);


//---------------------------------------------------------------------------------------------------------
// 												CLASS'S METHODS
//---------------------------------------------------------------------------------------------------------

// class's constructor
static void __attribute__ ((noinline)) HelloWorldScreenState_constructor(HelloWorldScreenState this)
{
	__CONSTRUCT_BASE(GameState);
}

// class's destructor
static void HelloWorldScreenState_destructor(HelloWorldScreenState this)
{
	// destroy base
	__SINGLETON_DESTROY;
}

// state's enter
static void HelloWorldScreenState_enter(HelloWorldScreenState this, void* owner __attribute__ ((unused)))
{
	// call base
	GameState_enter(__SAFE_CAST(GameState, this), owner);

	// disallow user input
    Game_disableKeypad(Game_getInstance());

	//load stage
	GameState_loadStage(__SAFE_CAST(GameState, this), (StageDefinition*)&EMPTY_STAGE_ST, NULL, true);

    char* strHelloWorld = I18n_getText(I18n_getInstance(), STR_HELLO_WORLD);
    Size textSize = Printing_getTextSize(Printing_getInstance(), strHelloWorld, NULL);

	// print hello world
    Printing_text(
        Printing_getInstance(),
        strHelloWorld,
        (__SCREEN_WIDTH >> 4) - (textSize.x >> 1),
        12,
        NULL
    );

	// add post processing effect to make text wobble
	Game_addPostProcessingEffect(Game_getInstance(), PostProcessingEffects_wobble, NULL);

	// start fade in effect
	Screen_startEffect(Screen_getInstance(),
	    kFadeTo, // effect type
	    0, // initial delay (in ms)
	    NULL, // target brightness
	    __FADE_DELAY, // delay between fading steps (in ms)
	    NULL, // callback function
	    NULL // callback scope
	);
}
