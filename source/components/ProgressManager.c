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
#include <stddef.h>

#include <I18n.h>
#include <ProgressManager.h>
#include <SRAMManager.h>
#include <Utilities.h>


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

__CLASS_DEFINITION(ProgressManager, Object);


//---------------------------------------------------------------------------------------------------------
// 												PROTOTYPES
//---------------------------------------------------------------------------------------------------------

static void ProgressManager_constructor(ProgressManager this);
bool ProgressManager_verifySaveStamp(ProgressManager this);
static void ProgressManager_initialize(ProgressManager this);


//---------------------------------------------------------------------------------------------------------
// 												CLASS'S METHODS
//---------------------------------------------------------------------------------------------------------

// it's a singleton
__SINGLETON(ProgressManager);

// class's constructor
static void __attribute__ ((noinline)) ProgressManager_constructor(ProgressManager this)
{
	ASSERT(this, "ProgressManager::constructor: null this");

	// construct base object
	__CONSTRUCT_BASE(Object);

	ProgressManager_initialize(this);
}

// class's destructor
void ProgressManager_destructor(ProgressManager this)
{
	ASSERT(this, "ProgressManager::destructor: null this");

	// destroy base
	__SINGLETON_DESTROY;
}

// verify save stamp in sram
// returns true if saved string matches the expected string, false otherwise
bool ProgressManager_verifySaveStamp(ProgressManager this __attribute__ ((unused)))
{
	char saveStamp[SAVE_STAMP_LENGTH];
	SRAMManager_read(SRAMManager_getInstance(), (BYTE*)&saveStamp, offsetof(struct UserData, saveStamp), sizeof(saveStamp));

	return !strncmp(saveStamp, SAVE_STAMP, SAVE_STAMP_LENGTH);
}

static void ProgressManager_initialize(ProgressManager this __attribute__ ((unused)))
{
	ASSERT(this, "ProgressManager::initialize: null this");

	if(!ProgressManager_verifySaveStamp(this))
	{
		// if no previous save could be verified, completely erase sram to start clean
		SRAMManager_clear(SRAMManager_getInstance());

		// write save stamp
		char saveStamp[SAVE_STAMP_LENGTH];
		SRAMManager_save(SRAMManager_getInstance(), (BYTE*)SAVE_STAMP, offsetof(struct UserData, saveStamp), sizeof(saveStamp));
	}
}

u8 ProgressManager_getLanguage(ProgressManager this __attribute__ ((unused)))
{
	ASSERT(this, "ProgressManager::getLanguage: null this");

	u8 languageId;
	SRAMManager_read(SRAMManager_getInstance(), (BYTE*)&languageId, offsetof(struct UserData, languageId), sizeof(languageId));
	return languageId;
}

void ProgressManager_setLanguage(ProgressManager this __attribute__ ((unused)), u8 languageId)
{
	ASSERT(this, "ProgressManager::setLanguage: null this");

	SRAMManager_save(SRAMManager_getInstance(), (BYTE*)&languageId, offsetof(struct UserData, languageId), sizeof(languageId));
}

bool ProgressManager_getAutomaticPauseStatus(ProgressManager this __attribute__ ((unused)))
{
	ASSERT(this, "ProgressManager::getAutomaticPause: null this");

	u8 autoPauseStatus;
	SRAMManager_read(SRAMManager_getInstance(), (BYTE*)&autoPauseStatus, offsetof(struct UserData, autoPauseStatus), sizeof(autoPauseStatus));
	return !autoPauseStatus;
}

void ProgressManager_setAutomaticPauseStatus(ProgressManager this __attribute__ ((unused)), u8 autoPauseStatus)
{
	ASSERT(this, "ProgressManager::setAutomaticPause: null this");

	// we save the inverted status, so that 0 = enabled, 1 = disabled.
	// that way, a blank value means enabled, which is the standard setting.
	autoPauseStatus = !autoPauseStatus;

	SRAMManager_save(SRAMManager_getInstance(), (BYTE*)&autoPauseStatus, offsetof(struct UserData, autoPauseStatus), sizeof(autoPauseStatus));
}
