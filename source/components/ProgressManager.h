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

#ifndef PROGRESS_MANAGER_H_
#define PROGRESS_MANAGER_H_


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <Object.h>


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DECLARATION
//---------------------------------------------------------------------------------------------------------

// declare the virtual methods
#define ProgressManager_METHODS(ClassName)																\
    	Object_METHODS(ClassName)																		\

// declare the virtual methods which are redefined
#define ProgressManager_SET_VTABLE(ClassName)															\
    	Object_SET_VTABLE(ClassName)																	\

// declare a ProgressManager
__CLASS(ProgressManager);

#define ProgressManager_ATTRIBUTES																		\
        /* super's attributes */																		\
        Object_ATTRIBUTES																				\


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

#define SAVE_STAMP								"VBJaEBrB"
#define SAVE_STAMP_LENGTH						8

// this struct is never instantiated, its sole purpose is to determine offsets of its members.
// therefore it acts as kind of like a map of sram content.
typedef struct UserData
{
	// flag to know if there is data saved
	u8 saveStamp[SAVE_STAMP_LENGTH];

	// active language id
	u8 languageId;

	// auto pause status (0: on, 1: off)
	u8 autoPauseStatus;

} UserData;


//---------------------------------------------------------------------------------------------------------
// 										PUBLIC INTERFACE
//---------------------------------------------------------------------------------------------------------

ProgressManager ProgressManager_getInstance();

void ProgressManager_destructor(ProgressManager this);
u8 ProgressManager_getLanguage(ProgressManager this);
void ProgressManager_setLanguage(ProgressManager this, u8 language);
bool ProgressManager_getAutomaticPauseStatus(ProgressManager this);
void ProgressManager_setAutomaticPauseStatus(ProgressManager this, u8 automaticPause);


#endif
