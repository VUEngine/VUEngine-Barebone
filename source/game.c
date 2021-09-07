/**
 * VUEngine Barebone
 *
 * (c) Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <Game.h>
#include <GameSaveDataManager.h>
#include <AutomaticPauseManager.h>
#include <PrecautionScreenState.h>
#include <AutomaticPauseSelectionScreenState.h>
#include <LanguageSelectionScreenState.h>
#include <AdjustmentScreenState.h>
#include <HelloWorldScreenState.h>


//---------------------------------------------------------------------------------------------------------
// 											GAME'S MAIN LOOP
//---------------------------------------------------------------------------------------------------------

int main(void)
{
	// initialize plugins
	AutomaticPauseManager::setActive(AutomaticPauseManager::getInstance(), true);
	GameSaveDataManager::restoreSettings(GameSaveDataManager::getInstance());
	
    SplashScreenState::setNextState(
		SplashScreenState::safeCast(PrecautionScreenState::getInstance()),
		GameState::safeCast(AdjustmentScreenState::getInstance())
	);
    SplashScreenState::setNextState(
		SplashScreenState::safeCast(AdjustmentScreenState::getInstance()),
		GameState::safeCast(AutomaticPauseSelectionScreenState::getInstance())
	);
    SplashScreenState::setNextState(
		SplashScreenState::safeCast(AutomaticPauseSelectionScreenState::getInstance()),
		GameState::safeCast(LanguageSelectionScreenState::getInstance())
	);
    SplashScreenState::setNextState(
		SplashScreenState::safeCast(LanguageSelectionScreenState::getInstance()),
		GameState::safeCast(HelloWorldScreenState::getInstance())
	);

	// start the game
	Game::start(Game::getInstance(), GameState::safeCast(PrecautionScreenState::getInstance()));

	// end program
	return true;
}
