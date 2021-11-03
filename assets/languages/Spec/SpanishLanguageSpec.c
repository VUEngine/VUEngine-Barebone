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

extern EntitySpec FLAG_SPAIN_EN;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS
//---------------------------------------------------------------------------------------------------------

const char* const SpanishLanguageStrings[] =
{
	/* kStringAutomaticPause: */
	"PAUSA AUTOMÁTICA",
	/* kStringAutomaticPauseExplanation: */
	" La función automática de pausa te\nrecordará que debes tomar un descanso\n  approximadamente cada 30 minutos",
	/* kStringHelloWorld: */
	"Hola Mundo!",
	/* kStringLanguageSelect: */
	"SELECCIONAR IDIOMA",
	/* kStringOff: */
	"Apagado",
	/* kStringOn: */
	"Encendido",
	/* kStringPrecautionScreenText: */
	"         IMPORTANTE\n     LEE LOS LIBROS DE\nINSTRUCCIONES Y PRECAUCIONES\n       ANTES DE JUGAR",
	/* kStringTakeARest: */
	"¡Por favor, tómese un descanso!",
};

const LangROMSpec SpanishLanguage =
{
	// language name
	"Español",

	// flag entity
	&FLAG_SPAIN_EN,
	
	// strings
	(const char**)SpanishLanguageStrings
};
