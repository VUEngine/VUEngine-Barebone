/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef WIREFRAMES_TEST_SCREEN_STATE_H_
#define WIREFRAMES_TEST_SCREEN_STATE_H_


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <GameState.h>


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DECLARATION
//---------------------------------------------------------------------------------------------------------

dynamic_singleton class WireframesTestScreenState : GameState
{
	static WireframesTestScreenState getInstance();
	override void enter(void* owner);
	override void suspend(void* owner);
	override void resume(void* owner);
	override void processUserInput(UserInput userInput);
}


#endif
