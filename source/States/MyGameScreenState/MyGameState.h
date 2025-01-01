/*
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef MY_GAME_STATE_H_
#define MY_GAME_STATE_H_


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <GameState.h>
#include <AlignmentCheckScreenState.h>


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

///
/// Class MyGameState
///
/// Inherits from GameState
///
/// Implements an empty game state intended to be the starting for a new, awesome game.
dynamic_singleton class MyGameState : GameState
{
	/// @protectedsection

	/// Cache of user's inputs
	uint32 lastInputs[__PLUGIN_ALIGNMENT_CHECK_BUTTON_SEQUENCE_LENGTH];

	/// @publicsection

	/// Method to GameSaveDataManager the singleton instance
	/// @return AnimationSchemesState singleton
	static MyGameState getInstance();

	/// Prepares the object to enter this state.
	/// @param owner: Object that is entering in this state
	override void enter(void* owner);

	/// Prepares the object to become inactive in this state.
	/// @param owner: Object that is in this state
	override void suspend(void* owner);

	/// Prepares the object to become active in this state.
	/// @param owner: Object that is in this state
	override void resume(void* owner);

	/// Process the provided user input.
	/// @param userInput: Struct with the current user input information
	override void processUserInput(const UserInput*  userInput);
}


#endif
