/**
 * VUEngine Barebone
 *
 * © Jorge Eremiev <jorgech3@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */


//---------------------------------------------------------------------------------------------------------
// 												INCLUDES
//---------------------------------------------------------------------------------------------------------

#include <string.h>

#include <Game.h>
#include <Camera.h>
#include <Printing.h>
#include <I18n.h>
#include <Languages.h>
#include <WireframesTestScreenState.h>
#include <Mesh.h>
#include <debugConfig.h>


//---------------------------------------------------------------------------------------------------------
// 												DECLARATIONS
//---------------------------------------------------------------------------------------------------------

extern StageROMSpec WireframesTestScreenStage;


//---------------------------------------------------------------------------------------------------------
// 											CLASS'S DEFINITION
//---------------------------------------------------------------------------------------------------------

// class's constructor
void WireframesTestScreenState::constructor()
{
	Base::constructor();
}

// class's destructor
void WireframesTestScreenState::destructor()
{
	// destroy base
	Base::destructor();
}

// state's enter
void WireframesTestScreenState::enter(void* owner __attribute__ ((unused)))
{
	// call base
	Base::enter(this, owner);

	// load stage
	GameState::loadStage(GameState::safeCast(this), (StageSpec*)&WireframesTestScreenStage, NULL, true, false);

	// start clocks to start animations
	GameState::startClocks(GameState::safeCast(this));

	// print hello world
	WireframesTestScreenState::print(this);

	// enable user input
	Game::enableKeypad(Game::getInstance());

	// start fade in effect
	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect(Camera::getInstance(),
		kFadeTo, // effect type
		0, // initial delay (in ms)
		NULL, // target brightness
		__FADE_DELAY, // delay between fading steps (in ms)
		NULL, // callback function
		NULL // callback scope
	);
}

void WireframesTestScreenState::suspend(void* owner)
{
	if(!Game::isEnteringSpecialMode(Game::getInstance()))
	{
		// do a fade out effect
		Camera::startEffect(Camera::getInstance(), kFadeOut, __FADE_DELAY);
	}

	// call base
	Base::suspend(this, owner);
}

void WireframesTestScreenState::resume(void* owner)
{
	// call base
	Base::resume(this, owner);

	// print hello world
	WireframesTestScreenState::print(this);

	if(!Game::isExitingSpecialMode(Game::getInstance()))
	{
		// start a fade in effect
		Camera::startEffect(Camera::getInstance(), kHide);
		Camera::startEffect(Camera::getInstance(),
			kFadeTo, // effect type
			0, // initial delay (in ms)
			NULL, // target brightness
			__FADE_DELAY, // delay between fading steps (in ms)
			NULL, // callback function
			NULL // callback scope
		);
	}
}

void WireframesTestScreenState::print()
{
}

void WireframesTestScreenState::processUserInput(UserInput userInput)
{
//	Stage::showStreamingProfiling(this->stage, 1, 1);

	if(K_SEL & userInput.releasedKey)
	{
		static bool interlaced = false;

		interlaced = !interlaced;

		if(interlaced)
		{
			Mesh::mutateMethod(draw, Mesh::draw);
		}
		else
		{
			Mesh::mutateMethod(draw, Mesh::drawInterlaced);
		}
	}
	else
	{
		Vector3D translation = {0, 0, 0};

		if(K_LU & userInput.holdKey)
		{
			translation.z = __PIXELS_TO_METERS(8);
		}

		if(K_LD & userInput.holdKey)
		{
			translation.z = -__PIXELS_TO_METERS(8);
		}

		if(K_LL & userInput.holdKey)
		{
			translation.x = -__PIXELS_TO_METERS(8);
		}

		if(K_LR & userInput.holdKey)
		{
			translation.x = __PIXELS_TO_METERS(8);
		}

		translation = Vector3D::rotate(translation, *_cameraRotation);

		Rotation rotation = Rotation::zero();

		if(K_RL & userInput.holdKey)
		{
			rotation.y = __I_TO_FIX10_6(2);
		}

		if(K_RR & userInput.holdKey)
		{
			rotation.y = -__I_TO_FIX10_6(2);
		}

		if(K_RU & userInput.holdKey)
		{
			rotation.x = __I_TO_FIX10_6(2);
		}

		if(K_RD & userInput.holdKey)
		{
			rotation.x = -__I_TO_FIX10_6(2);
		}

		Camera camera = Camera::getInstance();
		Camera::translate(camera, translation, false);
		Camera::rotate(camera, rotation);
	}
}

