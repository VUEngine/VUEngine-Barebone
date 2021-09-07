/**
 * VUEngine Barebone
 *
 * (c) Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
// IMPORTANT: Ensure that this file is encoded in Windows-1252 to make use of the full
//            character set including special characters of European languages.
//---------------------------------------------------------------------------------------------------------

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

const char* const LANGUAGE_DE_STRINGS[] =
{
	/* STR_AUTOMATIC_PAUSE_EXPLANATION: */
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
	// language name
	"Deutsch",

	// flag entity
	&FLAG_GERMANY_EN,
	
	// strings
	(const char**)LANGUAGE_DE_STRINGS
};
