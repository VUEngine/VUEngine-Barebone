///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              THIS FILE WAS AUTO-GENERATED - DO NOT EDIT                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


//---------------------------------------------------------------------------------------------------------
//												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <I18n.h>


//---------------------------------------------------------------------------------------------------------
//												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern EntitySpec FLAG_GERMANY_EN;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 or ISO-8859-1 ("ANSI") to make use
 * of the full extended ASCII character set including special characters of European languages.
 *
 * The following character is meant to prevent editors from loading this file as UTF-8, since it doesn't
 * form part of a valid UTF-8 byte sequence: ý
 */

const char* const LANGUAGE_DE_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	" Die Automatische Pause Funktion\nerinnert dich daran, das Spiel ca.\n  alle 30 Minuten zu pausieren",
	/* STR_AUTOMATIC_PAUSE: */
	"AUTOMATISCHE PAUSE",
	/* STR_HELLO_WORLD: */
	"Hallo, Welt!",
	/* STR_LANGUAGE_SELECT: */
	"SPRACHAUSWAHL",
	/* STR_OFF: */
	"Aus",
	/* STR_ON: */
	"An",
	/* STR_PRECAUTION_SCREEN_TEXT: */
	"        WICHTIG\nBITTE LESEN SIE VOR DEM\n SPIELEN DIE ANLEITUNG\nUND SICHERHEITSHINWEISE",
	/* STR_TAKE_A_REST: */
	"Bitte mache eine Pause!",
	
};

const LangROMSpec LANGUAGE_DE =
{
	// Language Name
	"Deutsch",

	// Flag Entity
	&FLAG_GERMANY_EN,
	
	// Strings
	(const char**)LANGUAGE_DE_STRINGS
};
