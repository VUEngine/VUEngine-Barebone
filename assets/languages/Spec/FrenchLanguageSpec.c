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

extern EntitySpec FLAG_FRANCE_EN;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS
//---------------------------------------------------------------------------------------------------------

const char* const FrenchLanguageStrings[] =
{
	/* kStringAutomaticPause: */
	"PAUSE AUTOMATIQUE",
	/* kStringAutomaticPauseExplanation: */
	"  La fonction Pause automatique va\nvous rappelerez de prendre une pause\n  de jeu chaque 30 minutes environ",
	/* kStringHelloWorld: */
	"Bonjour Le Monde!",
	/* kStringLanguageSelect: */
	"CHOIX DE LA LANGUE",
	/* kStringOff: */
	"Desactiv�",
	/* kStringOn: */
	"Activ�",
	/* kStringPrecautionScreenText: */
	"        IMPORTANT\nPRENEZ CONAISSANCE DE LA\nNOTICE ET DES PR�CAUTIONS\n    A AVANT DE JOUER",
	/* kStringTakeARest: */
	"Se il vous pla�t, prendre un repos!",
};

const LangROMSpec FrenchLanguage =
{
	// language name
	"Fran�ais",

	// flag entity
	&FLAG_FRANCE_EN,
	
	// strings
	(const char**)FrenchLanguageStrings
};
