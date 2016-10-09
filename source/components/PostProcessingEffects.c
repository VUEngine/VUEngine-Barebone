/* VBJaEngine: bitmap graphics engine for the Nintendo Virtual Boy
 *
 * Copyright (C) 2007 Jorge Eremiev <jorgech3@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program. If not,
 * see <http://www.gnu.org/licenses/>.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <PostProcessingEffects.h>
#include <Optics.h>
#include <Utilities.h>
#include <DirectDraw.h>
#include <Game.h>
#include <Container.h>
#include <Entity.h>
#include <VIPManager.h>


//---------------------------------------------------------------------------------------------------------
// 												PROTOTYPES
//---------------------------------------------------------------------------------------------------------

u32 PostProcessingEffects_writeToFrameBuffer(u16 y, u16 shift, u32* columnSourcePointer, u32 previousSourcePointerValue);


//---------------------------------------------------------------------------------------------------------
// 												FUNCTIONS
//---------------------------------------------------------------------------------------------------------

/**
 * Applies a full screen wobble distortion that is reminiscent of water waves. This effect reads and write
 * almost the whole screen and is therefore not feasible on hardware.
 *
 * @param currentDrawingFrameBufferSet  The framebuffer set that's currently being accessed
 */
void PostProcessingEffects_wobble(u32 currentDrawingFrameBufferSet, SpatialObject spatialObject __attribute__ ((unused)))
{
    u8 buffer = 0;
    u16 x = 0;
    u32 previousSourcePointerValue = 0;

    // runtime working variables
    static int waveLutIndex = 0;

    // look up table of bitshifts performed on rows
    // values must be multiples of 2
    const u32 waveLut[128] =
    {
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
         2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
         4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
         6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
         8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
         8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
         6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
         4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
         2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // write to framebuffers for both screens
    for(; buffer < 2; buffer++)
    {
        // loop columns
        // leave out leftmost and rightmost columns for performance reasons
        for(x = 96; x < 288; x++)
        {
            // get pointer to currently manipulated 32 bits of framebuffer
            u32* columnSourcePointer = (u32*) (currentDrawingFrameBufferSet | (buffer ? 0x00010000 : 0)) + (x << 4);

            // the shifted out pixels on top should be black
            previousSourcePointerValue = 0;

            // increase look up table index, wrap around if necessary
            waveLutIndex += (waveLutIndex < 127) ? 1 : -127;

            // we can skip further processing for the current column if no shifting would be done on it
            if(waveLut[waveLutIndex] == 0)
            {
                continue;
            }

            // apply only to area that holds text on title
            previousSourcePointerValue = PostProcessingEffects_writeToFrameBuffer(6, waveLut[waveLutIndex], columnSourcePointer, previousSourcePointerValue);
        }
    }

    // move the wave one pixel in the next frame
    waveLutIndex++;
}

/**
 * Helper function used by various post processing effects to write a 32 bit value to the framebuffer
 * (16 pixels)
 *
 * @param y                             Y coordinate (true y value = y * 16)
 * @param shift                         Number of bits to shift the pixels by
 * @param columnSourcePointer           Framebuffer address of the current column (x value)
 * @param previousSourcePointerValue    Value from the loop's previous cycle (effectively where y - 1)
 */
u32 PostProcessingEffects_writeToFrameBuffer(u16 y, u16 shift, u32* columnSourcePointer, u32 previousSourcePointerValue)
{
    // pointer to currently manipulated 32 bits of framebuffer
    u32* sourcePointer = columnSourcePointer + y;

    // save current pointer value to temp var and shift highest x bits of it, according to lut,
    // to the lowest bits, since we want to insert these
    u32 sourcePointerCurrentValue = *sourcePointer;
    u32 previousSourcePointerValueTemp = sourcePointerCurrentValue >> (32 - shift);

    // manipulate current 32 bits in frame buffer
    *sourcePointer =
        // shift bits according to wave lut
        // it's two bits per pixel, so 2 bits shifted left = 1 pixel shifted down on screen
        (sourcePointerCurrentValue << shift)

        // since the above shifting creates black pixels, we need to carry over these pixels
        // from the previous loop
        | previousSourcePointerValue;

    // we need the current source pointer value from _before_ we modified it, therefore we save it
    // it to a temp variable while modifying
    return previousSourcePointerValueTemp;
}
