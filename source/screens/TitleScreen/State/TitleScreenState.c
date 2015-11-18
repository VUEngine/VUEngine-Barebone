/* VBJaEngine: bitmap graphics engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007 Jorge Eremiev <jorgech3@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program. If not,
 * see <http://www.gnu.org/licenses/>.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <string.h>

#include <Game.h>
#include <Screen.h>
#include <Printing.h>
#include <I18n.h>
#include <TitleScreenState.h>
#include <AdjustmentScreenState.h>
#include <Languages.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMDef EMPTY_ST;


//---------------------------------------------------------------------------------------------------------
// 												PROTOTYPES
//---------------------------------------------------------------------------------------------------------

static void TitleScreenState_destructor(TitleScreenState this);
static void TitleScreenState_constructor(TitleScreenState this);
static void TitleScreenState_enter(TitleScreenState this, void* owner);


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

__CLASS_DEFINITION(TitleScreenState, GameState);
__SINGLETON_DYNAMIC(TitleScreenState);


//---------------------------------------------------------------------------------------------------------
// 												CLASS'S METHODS
//---------------------------------------------------------------------------------------------------------

// class's constructor
static void TitleScreenState_constructor(TitleScreenState this)
{
	__CONSTRUCT_BASE();
}

// class's destructor
static void TitleScreenState_destructor(TitleScreenState this)
{
	// destroy base
	__SINGLETON_DESTROY;
}

// state's enter
static void TitleScreenState_enter(TitleScreenState this, void* owner)
{
	//load stage
	GameState_loadStage(__GET_CAST(GameState, this), (StageDefinition*)&EMPTY_ST, NULL, true);

    char* strHelloWorld = I18n_getText(I18n_getInstance(), STR_HELLO_WORLD);
    Size textSize = Printing_getTextSize(Printing_getInstance(), strHelloWorld, NULL);

    Printing_text(
        Printing_getInstance(),
        strHelloWorld,
        (__SCREEN_WIDTH >> 4) - (textSize.x >> 1),
        (__SCREEN_HEIGHT >> 4) - (textSize.y >> 1),
        NULL
    );

    Screen_startEffect(Screen_getInstance(), kFadeIn, 16);
}