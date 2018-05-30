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

#include <I18n.h>


//---------------------------------------------------------------------------------------------------------
// 												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 or ISO-8859-1 ("ANSI") to make use
 * of the full extended ASCII character set including special characters of European languages.
 *
 * The following character is meant to prevent editors to load this file as UTF-8, since it doesn't
 * form part of a valid UTF-8 byte sequence: �
 */

const char* const LANGUAGE_DE_STRINGS[] =
{
	/* STR_AUTOMATIC_PAUSE */			"Automatische Pause",
	/* STR_AUTO_PAUSE_EXPLANATION */	" Die Automatische Pause Funktion\nerinnert dich daran, das Spiel ca.\n  alle 30 Minuten zu pausieren",
	/* STR_HELLO_WORLD */				"Hallo, Welt!",
	/* STR_LANGUAGE */					"Sprache",
	/* STR_LANGUAGE_SELECT */			"Sprachauswahl",
	/* STR_OFF */						"Aus",
	/* STR_ON */						"An",
	/* STR_PRECAUTION_SCREEN_TEXT */	"        WICHTIG\n\n   LESEN SIE VOR DEM\n\n SPIELEN DIE ANLEITUNG\n\nUND SICHERHEITSHINWEISE",
	/* STR_TAKE_A_REST */				"Bitte mache eine Pause!",
};

const LangROMDef LANGUAGE_DE =
{
	// Language Name
	"Deutsch",

	// Strings
	(const char**)LANGUAGE_DE_STRINGS
};
