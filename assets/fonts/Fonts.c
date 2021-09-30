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

#include <Fonts.h>


//---------------------------------------------------------------------------------------------------------
//												DEFINITIONS
//---------------------------------------------------------------------------------------------------------

FontSpec* const __FONTS[] =
{
	(FontSpec*)&DEFAULT_FONT,
	(FontSpec*)&PROFILER_FONT,
	(FontSpec*)&ASTONISH_FONT,
	(FontSpec*)&ASTONISH_EXT_FONT,
	(FontSpec*)&ASTONISH_S_FONT,
	(FontSpec*)&ASTONISH_S_EXT_FONT,
	(FontSpec*)&VIRTUAL_BOY_FONT,
	(FontSpec*)&VIRTUAL_BOY_EXT_FONT,
	
	NULL
};