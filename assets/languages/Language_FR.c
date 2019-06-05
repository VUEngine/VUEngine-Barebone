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

extern EntitySpec FLAG_FRANCE_EN;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 or ISO-8859-1 ("ANSI") to make use
 * of the full extended ASCII character set including special characters of European languages.
 *
 * The following character is meant to prevent editors from loading this file as UTF-8, since it doesn't
 * form part of a valid UTF-8 byte sequence: �
 */

const char* const LANGUAGE_FR_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	"  La fonction Pause automatique va\nvous rappelerez de prendre une pause\n  de jeu chaque 30 minutes environ",
	/* STR_AUTOMATIC_PAUSE: */
	"PAUSE AUTOMATIQUE",
	/* STR_HELLO_WORLD: */
	"Bonjour Le Monde!",
	/* STR_LANGUAGE_SELECT: */
	"CHOIX DE LA LANGUE",
	/* STR_OFF: */
	"Desactiv�",
	/* STR_ON: */
	"Activ�",
	/* STR_PRECAUTION_SCREEN_TEXT: */
	"        IMPORTANT\nPRENEZ CONAISSANCE DE LA\nNOTICE ET DES PR�CAUTIONS\n    A AVANT DE JOUER",
	/* STR_TAKE_A_REST: */
	"Se il vous pla�t, prendre un repos!",
	
};

const LangROMSpec LANGUAGE_FR =
{
	// Language Name
	"Fran�ais",

	// Flag Entity
	&FLAG_FRANCE_EN,
	
	// Strings
	(const char**)LANGUAGE_FR_STRINGS
};
