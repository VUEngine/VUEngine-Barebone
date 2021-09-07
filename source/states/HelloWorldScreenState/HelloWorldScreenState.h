/**
 * VUEngine Barebone
 *
 * (c) Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef HELLO_WORLD_STATE_H_
#define HELLO_WORLD_STATE_H_


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <GameState.h>


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DECLARATION
//---------------------------------------------------------------------------------------------------------

dynamic_singleton class HelloWorldScreenState : GameState
{
	static HelloWorldScreenState getInstance();
	override void enter(void* owner);
	override void suspend(void* owner);
	override void resume(void* owner);
}


#endif
