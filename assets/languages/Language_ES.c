/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
// IMPORTANT: Ensure that this file is encoded in Windows-1252 to make use of the full
//            character set including special characters of European languages.
//---------------------------------------------------------------------------------------------------------

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

const char* const LANGUAGE_ES_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	" La funci�n autom�tica de pausa te\nrecordar� que debes tomar un descanso\n  approximadamente cada 30 minutos",
	/* STR_AUTOMATIC_PAUSE: */
	"PAUSA AUTOM�TICA",
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
	"�Por favor, t�mese un descanso!",
	
};

const LangROMSpec LANGUAGE_ES =
{
	// language name
	"Espa�ol",

	// flag entity
	&FLAG_SPAIN_EN,
	
	// strings
	(const char**)LANGUAGE_ES_STRINGS
};
