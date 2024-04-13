/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef MY_GAME_STATE_H_
#define MY_GAME_STATE_H_


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <GameState.h>
#include <AlignmentCheckScreenState.h>


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DECLARATION
//---------------------------------------------------------------------------------------------------------

dynamic_singleton class MyGameState : GameState
{
	uint32 lastInputs[__PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH];

	static MyGameState getInstance();
	override void enter(void* owner);
	override void suspend(void* owner);
	override void resume(void* owner);
	override void processUserInput(const UserInput*  userInput);
}


#endif
