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
	/* kStringAutomaticPauseBody: */
	"¡Por favor, tómese un descanso!",
	/* kStringAutomaticPauseSelectionBody: */
	" La función automática de pausa te\nrecordará que debes tomar un descanso\n  approximadamente cada 30 minutos",
	/* kStringAutomaticPauseSelectionOff: */
	"Apagado",
	/* kStringAutomaticPauseSelectionOn: */
	"Encendido",
	/* kStringAutomaticPauseSelectionTitle: */
	"PAUSA AUTOMÁTICA",
	/* kStringAutomaticPauseTitle: */
	"PAUSA AUTOMÁTICA",
	/* kStringHelloWorld: */
	"Hola Mundo!",
	/* kStringLanguageSelectTitle: */
	"SELECCIONAR IDIOMA",
	/* kStringPrecautionScreenBody: */
	"         IMPORTANTE\n     LEE LOS LIBROS DE\nINSTRUCCIONES Y PRECAUCIONES\n       ANTES DE JUGAR",
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
