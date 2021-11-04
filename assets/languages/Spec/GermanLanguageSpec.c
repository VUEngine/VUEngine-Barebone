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
	/* kStringAutomaticPauseBody: */
	"Bitte mache eine Pause!",
	/* kStringAutomaticPauseSelectionBody: */
	" Die Automatische Pause Funktion\nerinnert dich daran, das Spiel ca.\n  alle 30 Minuten zu pausieren",
	/* kStringAutomaticPauseSelectionOff: */
	"Aus",
	/* kStringAutomaticPauseSelectionOn: */
	"An",
	/* kStringAutomaticPauseSelectionTitle: */
	"AUTOMATISCHE PAUSE",
	/* kStringAutomaticPauseTitle: */
	"AUTOMATISCHE PAUSE",
	/* kStringHelloWorld: */
	"Hallo, Welt!",
	/* kStringLanguageSelectTitle: */
	"SPRACHAUSWAHL",
	/* kStringPrecautionScreenBody: */
	"        WICHTIG\nBITTE LESEN SIE VOR DEM\n SPIELEN DIE ANLEITUNG\nUND SICHERHEITSHINWEISE",
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
