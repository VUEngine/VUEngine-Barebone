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
	(FontSpec*)&DefaultFont,
	(FontSpec*)&ProfilerFont,
	(FontSpec*)&AstonishFont,
	(FontSpec*)&AstonishExtFont,
	(FontSpec*)&AstonishSFont,
	(FontSpec*)&AstonishSExtFont,
	(FontSpec*)&VirtualBoyFont,
	(FontSpec*)&VirtualBoyExtFont,
	
	NULL
};