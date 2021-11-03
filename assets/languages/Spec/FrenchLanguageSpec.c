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
	/* kStringAutomaticPauseBody: */
	"Se il vous plaît, prendre un repos!",
	/* kStringAutomaticPauseSelectionBody: */
	"  La fonction Pause automatique va\nvous rappelerez de prendre une pause\n  de jeu chaque 30 minutes environ",
	/* kStringAutomaticPauseSelectionOff: */
	"Desactivé",
	/* kStringAutomaticPauseSelectionOn: */
	"Activé",
	/* kStringAutomaticPauseSelectionTitle: */
	"PAUSE AUTOMATIQUE",
	/* kStringAutomaticPauseTitle: */
	"PAUSE AUTOMATIQUE",
	/* kStringHelloWorld: */
	"Bonjour Le Monde!",
	/* kStringLanguageSelectTitle: */
	"CHOIX DE LA LANGUE",
	/* kStringPrecautionScreenBody: */
	"        IMPORTANT\nPRENEZ CONAISSANCE DE LA\nNOTICE ET DES PRÉCAUTIONS\n    A AVANT DE JOUER",
};

const LangROMSpec FrenchLanguage =
{
	// language name
	"Français",

	// flag entity
	&FLAG_FRANCE_EN,
	
	// strings
	(const char**)FrenchLanguageStrings
};
