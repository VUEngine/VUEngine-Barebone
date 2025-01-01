///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              THIS FILE WAS AUTO-GENERATED - DO NOT EDIT                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <I18n.h>
#include <Languages.h>


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

extern LangROMSpec EnglishLanguageSpec;
extern EntitySpec FlagUnitedKingdomEntitySpec;
extern LangROMSpec GermanLanguageSpec;
extern EntitySpec FlagGermanyEntitySpec;
extern LangROMSpec SpanishLanguageSpec;
extern EntitySpec FlagSpainEntitySpec;


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// DEFINITIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

LangROMSpec* const _languages[] =
{
	&EnglishLanguageSpec,
	&GermanLanguageSpec,
	&SpanishLanguageSpec,
	
	NULL
};

const char* const EnglishLanguageStrings[] =
{
    /* kStringAutomaticPauseBody: */
    "Please take a rest!",
    /* kStringAutomaticPauseSelectionBody: */
    "The Automatic Pause feature will\nremind you to take a break from\nplaying approx. every 30 minutes",
    /* kStringAutomaticPauseSelectionOff: */
    "Off",
    /* kStringAutomaticPauseSelectionOn: */
    "On",
    /* kStringAutomaticPauseSelectionTitle: */
    "AUTOMATIC PAUSE",
    /* kStringAutomaticPauseTitle: */
    "AUTOMATIC PAUSE",
    /* kStringLanguageSelectTitle: */
    "LANGUAGE SELECT",
    /* kStringPrecautionScreenBody: */
    "     IMPORTANT\nREAD INSTRUCTION AND\nPRECAUTION BOOKLETS\n  BEFORE OPERATING",
    /* kStringYourGameHere: */
    "Your Game Here",
};

const LangROMSpec EnglishLanguageSpec =
{
	// language name
	"English",

	// flag entity
	&FlagUnitedKingdomEntitySpec,
	
	// strings
	(const char**)EnglishLanguageStrings
};

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
    /* kStringLanguageSelectTitle: */
    "SPRACHAUSWAHL",
    /* kStringPrecautionScreenBody: */
    "        WICHTIG\nBITTE LESEN SIE VOR DEM\n SPIELEN DIE ANLEITUNG\nUND SICHERHEITSHINWEISE",
    /* kStringYourGameHere: */
    "Dein Spiel hier",
};

const LangROMSpec GermanLanguageSpec =
{
	// language name
	"Deutsch",

	// flag entity
	&FlagGermanyEntitySpec,
	
	// strings
	(const char**)GermanLanguageStrings
};

const char* const SpanishLanguageStrings[] =
{
    /* kStringAutomaticPauseBody: */
    "�Por favor, t�mese un descanso!",
    /* kStringAutomaticPauseSelectionBody: */
    " La funci�n autom�tica de pausa te\nrecordar� que debes tomar un descanso\n  approximadamente cada 30 minutos",
    /* kStringAutomaticPauseSelectionOff: */
    "Apagado",
    /* kStringAutomaticPauseSelectionOn: */
    "Encendido",
    /* kStringAutomaticPauseSelectionTitle: */
    "PAUSA AUTOM�TICA",
    /* kStringAutomaticPauseTitle: */
    "PAUSA AUTOM�TICA",
    /* kStringLanguageSelectTitle: */
    "SELECCIONAR IDIOMA",
    /* kStringPrecautionScreenBody: */
    "         IMPORTANTE\n     LEE LOS LIBROS DE\nINSTRUCCIONES Y PRECAUCIONES\n       ANTES DE JUGAR",
    /* kStringYourGameHere: */
    "Su juego aqu�",
};

const LangROMSpec SpanishLanguageSpec =
{
	// language name
	"Espa�ol",

	// flag entity
	&FlagSpainEntitySpec,
	
	// strings
	(const char**)SpanishLanguageStrings
};
