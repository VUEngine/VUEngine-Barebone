///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              THIS FILE WAS AUTO-GENERATED - DO NOT EDIT                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


//---------------------------------------------------------------------------------------------------------
//                                                INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <I18n.h>


//---------------------------------------------------------------------------------------------------------
//                                              DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern EntitySpec FLAG_UNITED_KINGDOM_EN;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS
//---------------------------------------------------------------------------------------------------------

const char* const EnglishLanguageStrings[] =
{
	/* kStringAutomaticPause: */
	"AUTOMATIC PAUSE",
	/* kStringAutomaticPauseExplanation: */
	"The Automatic Pause feature will\nremind you to take a break from\nplaying approx. every 30 minutes",
	/* kStringHelloWorld: */
	"Hello, World!",
	/* kStringLanguageSelect: */
	"LANGUAGE SELECT",
	/* kStringOff: */
	"Off",
	/* kStringOn: */
	"On",
	/* kStringPrecautionScreenText: */
	"     IMPORTANT\nREAD INSTRUCTION AND\nPRECAUTION BOOKLETS\n  BEFORE OPERATING",
	/* kStringTakeARest: */
	"Please take a rest!",
};

const LangROMSpec EnglishLanguage =
{
	// language name
	"English",

	// flag entity
	&FLAG_UNITED_KINGDOM_EN,
	
	// strings
	(const char**)EnglishLanguageStrings
};
