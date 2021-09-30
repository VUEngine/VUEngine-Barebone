/**
 * VUEngine Barebone
 *
 * (c) Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
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

extern EntitySpec FLAG_FRANCE_EN;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

const char* const LANGUAGE_FR_STRINGS[] =
{
	/* STR_AUTO_PAUSE_EXPLANATION: */
	"  La fonction Pause automatique va\nvous rappelerez de prendre une pause\n  de jeu chaque 30 minutes environ",
	/* STR_AUTOMATIC_PAUSE: */
	"PAUSE AUTOMATIQUE",
	/* STR_HELLO_WORLD: */
	"Bonjour Le Monde!",
	/* STR_LANGUAGE_SELECT: */
	"CHOIX DE LA LANGUE",
	/* STR_OFF: */
	"Desactiv�",
	/* STR_ON: */
	"Activ�",
	/* STR_PRECAUTION_SCREEN_TEXT: */
	"        IMPORTANT\nPRENEZ CONAISSANCE DE LA\nNOTICE ET DES PR�CAUTIONS\n    A AVANT DE JOUER",
	/* STR_TAKE_A_REST: */
	"Se il vous pla�t, prendre un repos!",
	
};

const LangROMSpec LANGUAGE_FR =
{
	// language name
	"Fran�ais",

	// flag entity
	&FLAG_FRANCE_EN,
	
	// strings
	(const char**)LANGUAGE_FR_STRINGS
};
