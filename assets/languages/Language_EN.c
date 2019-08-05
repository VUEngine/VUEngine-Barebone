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

extern EntitySpec FLAG_UNITED_KINGDOM_EN;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 to make use of the full
 *            character set including special characters of European languages.
 */

const char* const LANGUAGE_EN_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	"The Automatic Pause feature will\nremind you to take a break from\nplaying approx. every 30 minutes",
	/* STR_AUTOMATIC_PAUSE: */
	"AUTOMATIC PAUSE",
	/* STR_HELLO_WORLD: */
	"Hello, World!",
	/* STR_LANGUAGE_SELECT: */
	"LANGUAGE SELECT",
	/* STR_OFF: */
	"Off",
	/* STR_ON: */
	"On",
	/* STR_PRECAUTION_SCREEN_TEXT: */
	"     IMPORTANT\nREAD INSTRUCTION AND\nPRECAUTION BOOKLETS\n  BEFORE OPERATING",
	/* STR_TAKE_A_REST: */
	"Please take a rest!",
	
};

const LangROMSpec LANGUAGE_EN =
{
	// language name
	"English",

	// flag entity
	&FLAG_UNITED_KINGDOM_EN,
	
	// strings
	(const char**)LANGUAGE_EN_STRINGS
};
