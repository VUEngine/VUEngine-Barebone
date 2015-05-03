/* VBJaEngine: bitmap graphics engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007 Jorge Eremiev
 * jorgech3@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef LANGUAGES_H_
#define LANGUAGES_H_


//---------------------------------------------------------------------------------------------------------
// 												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

enum LanguageIdentifiers
{
    LANG_EN,
    LANG_DE,
    LANG_ES,
    LANG_FR,
};

enum LanguageStrings
{
	STR_PRECAUTION_SCREEN_TITLE,
	STR_PRECAUTION_SCREEN_TEXT,
	STR_AUTOMATIC_PAUSE,
	STR_AUTOMATIC_PAUSE_EXPLANATION,
    STR_AUTOMATIC_PAUSE_TEXT,
    STR_ON,
    STR_OFF,
    STR_LANGUAGE_SELECT,

    STR_HELLO_WORLD,
};


#endif