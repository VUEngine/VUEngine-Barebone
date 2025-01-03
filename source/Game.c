/*
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <AdjustmentScreenState.h>
#include <AutomaticPauseManager.h>
#include <AutomaticPauseSelectionScreenState.h>
#include <GameSaveDataManager.h>
#include <I18n.h>
#include <MyGameState.h>
#include <LanguageSelectionScreenState.h>
#include <PrecautionScreenState.h>
#include <VUEngine.h>


//——————————————————————————————————————————————————————————————————————————————————————————————————————————
// GAME'S ENTRY POINT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————


//——————————————————————————————————————————————————————————————————————————————————————————————————————————

int game(void)
{
	// initialize plugins
	AutomaticPauseManager::setActive(AutomaticPauseManager::getInstance(), GameSaveDataManager::getAutomaticPauseStatus(GameSaveDataManager::getInstance()));
	I18n::setActiveLanguage(I18n::getInstance(), GameSaveDataManager::getLanguage(GameSaveDataManager::getInstance()));
	
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
		GameState::safeCast(MyGameState::getInstance())
	);

	// start the game
	VUEngine::start(VUEngine::getInstance(), GameState::safeCast(PrecautionScreenState::getInstance()));

	// end program
	return true;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————

