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

extern EntitySpec FLAG_GERMANY_EN;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS
//---------------------------------------------------------------------------------------------------------

const char* const GermanLanguageStrings[] =
{
	/* kStringAutomaticPause: */
	"AUTOMATISCHE PAUSE",
	/* kStringAutomaticPauseExplanation: */
	" Die Automatische Pause Funktion\nerinnert dich daran, das Spiel ca.\n  alle 30 Minuten zu pausieren",
	/* kStringHelloWorld: */
	"Hallo, Welt!",
	/* kStringLanguageSelect: */
	"SPRACHAUSWAHL",
	/* kStringOff: */
	"Aus",
	/* kStringOn: */
	"An",
	/* kStringPrecautionScreenText: */
	"        WICHTIG\nBITTE LESEN SIE VOR DEM\n SPIELEN DIE ANLEITUNG\nUND SICHERHEITSHINWEISE",
	/* kStringTakeARest: */
	"Bitte mache eine Pause!",
};

const LangROMSpec GermanLanguage =
{
	// language name
	"Deutsch",

	// flag entity
	&FLAG_GERMANY_EN,
	
	// strings
	(const char**)GermanLanguageStrings
};
