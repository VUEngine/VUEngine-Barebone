/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
//												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <I18n.h>
#include <Languages.h>


//---------------------------------------------------------------------------------------------------------
//												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern LangROMSpec LANGUAGE_EN;
extern LangROMSpec LANGUAGE_DE;
extern LangROMSpec LANGUAGE_ES;
extern LangROMSpec LANGUAGE_FR;


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

LangROMSpec* const __LANGUAGES[] =
{
	&LANGUAGE_EN,
	&LANGUAGE_DE,
	&LANGUAGE_ES,
	&LANGUAGE_FR,
	
	NULL
};
