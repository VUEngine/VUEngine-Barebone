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
	"PAUSA AUTOM�TICA",
	/* kStringAutomaticPauseExplanation: */
	" La funci�n autom�tica de pausa te\nrecordar� que debes tomar un descanso\n  approximadamente cada 30 minutos",
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
	"�Por favor, t�mese un descanso!",
};

const LangROMSpec SpanishLanguage =
{
	// language name
	"Espa�ol",

	// flag entity
	&FLAG_SPAIN_EN,
	
	// strings
	(const char**)SpanishLanguageStrings
};
