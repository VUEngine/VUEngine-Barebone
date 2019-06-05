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

extern EntitySpec FLAG_SPAIN_EN;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 or ISO-8859-1 ("ANSI") to make use
 * of the full extended ASCII character set including special characters of European languages.
 *
 * The following character is meant to prevent editors from loading this file as UTF-8, since it doesn't
 * form part of a valid UTF-8 byte sequence: ý
 */

const char* const LANGUAGE_ES_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	" La función automática de pausa te\nrecordará que debes tomar un descanso\n  approximadamente cada 30 minutos",
	/* STR_AUTOMATIC_PAUSE: */
	"PAUSA AUTOMÁTICA",
	/* STR_HELLO_WORLD: */
	"Hola Mundo!",
	/* STR_LANGUAGE_SELECT: */
	"SELECCIONAR IDIOMA",
	/* STR_OFF: */
	"Apagado",
	/* STR_ON: */
	"Encendido",
	/* STR_PRECAUTION_SCREEN_TEXT: */
	"         IMPORTANTE\n     LEE LOS LIBROS DE\nINSTRUCCIONES Y PRECAUCIONES\n       ANTES DE JUGAR",
	/* STR_TAKE_A_REST: */
	"¡Por favor, tómese un descanso!",
	
};

const LangROMSpec LANGUAGE_ES =
{
	// Language Name
	"Español",

	// Flag Entity
	&FLAG_SPAIN_EN,
	
	// Strings
	(const char**)LANGUAGE_ES_STRINGS
};
