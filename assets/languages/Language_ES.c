/* VUEngine - Virtual Utopia Engine <http://vuengine.planetvb.com/>
 * A universal game engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007, 2018 by Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <chris@vr32.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <I18n.h>


//---------------------------------------------------------------------------------------------------------
//												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern EntityDefinition FLAG_SPAIN_EN;


//---------------------------------------------------------------------------------------------------------
// 												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

/*
 * IMPORTANT: Ensure that this file is encoded in Windows-1252 or ISO-8859-1 ("ANSI") to make use
 * of the full extended ASCII character set including special characters of European languages.
 *
 * The following character is meant to prevent editors to load this file as UTF-8, since it doesn't
 * form part of a valid UTF-8 byte sequence: �
 */

const char* const LANGUAGE_ES_STRINGS[] =
{
	/* Components */

	/* STR_AUTOMATIC_PAUSE */			"PAUSA AUTOM�TICA",
	/* STR_AUTO_PAUSE_EXPLANATION */	" La funci�n autom�tica de pausa te\nrecordar� que debes tomar un descanso\n  approximadamente cada 30 minutos",
	/* STR_LANGUAGE_SELECT */			"SELECCIONAR IDIOMA",
	/* STR_OFF */						"Apagado",
	/* STR_ON */						"Encendido",
	/* STR_PRECAUTION_SCREEN_TEXT */	"         IMPORTANTE\n\n     LEE LOS LIBROS DE\n\nINSTRUCCIONES Y PRECAUCIONES\n\n       ANTES DE JUGAR",
	/* STR_TAKE_A_REST */				"�Por favor, t�mese un descanso!",

	/* Game */

	/* STR_HELLO_WORLD */				"Hola Mundo!",
};

const LangROMDef LANGUAGE_ES =
{
	// Language Name
	"Espa�ol",

	// Flag Entity
	&FLAG_SPAIN_EN,

	// Strings
	(const char**)LANGUAGE_ES_STRINGS
};
