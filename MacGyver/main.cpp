#include <iostream>
#include <string>

//SDL imports
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>


//main engine framework imports
#include "Globals.h"
#include "Vector3.h"
#include "Scene.h"
#include "SceneManager.h"
#include "GameObject.h"
#include "Input.h"
#include "Camera.h"
#include "Renderable.h"
#include "AnimationHandler.h"

#include "TextRenderer.h"
#include  "Font.h"
#include "Text.h"
#include "UICamera.h"
#include "UIMouseDetector.h"
#include "UIRenderable.h"

#include "Messenger.h"


#include "SingletonSerialiser.h"

//extra components imports
#include "GravityImpacting.h"
#include "PlayerController.h"
#include "KeyPressedOverlay.h"
#include "PlayerFSM.h"
#include "InputBuffer.h"


using namespace Macgyver;

extern int Globals::SCREEN_WIDTH;
extern int Globals::SCREEN_HEIGHT;
SDL_Window* WINDOW;
SDL_Renderer* c_RENDERER;


#include<algorithm>
void DEBUG_PROFILE_FRAMETIMES(unsigned int* frames, std::size_t numFrames) 
{
	std::sort(frames, frames + numFrames);
	unsigned long sum = 0;
	unsigned long above10 = 0;
	unsigned long above25 = 0;
	unsigned long above50 = 0;
	unsigned long above100 = 0;
	for (int i = 0; i < numFrames; i++) {
		sum += frames[i];
		if (frames[i] > 100) {
			above100++;
		}
		else if (frames[i] > 50) {
			above50++;
		}
		else if (frames[i] > 25) {
			above25++;
		}
		else if (frames[i] > 10){
			above10++;
		}
	}
	double frameTime = sum / double(numFrames);
	std::cout << "Mean Frame Time: " << frameTime << std::endl;
	std::cout << "Mean FPS: " << 1000 / frameTime << std::endl;
	std::cout << "Frames between 1-10ms: " << numFrames - above10 - above25 - above50 - above100 << std::endl;
	std::cout << "Frames between 11-25ms: " << above10 << std::endl;
	std::cout << "Frames between 26-50ms: " << above25 << std::endl;
	std::cout << "Frames between 51-100ms: " << above50 << std::endl;
	std::cout << "Frames  > 100ms : " << above100 << std::endl;
	std::cout << "Lowest frame time: " << frames[0] << std::endl;
	std::cout << "Median Frame time : " << frames[((numFrames + 1) / 2) -1] << std::endl;
	std::cout << "90th %tile Frame time: " << frames[(numFrames / 10 * 9) - 1] << std::endl;
	std::cout << "99th %tile Frame time: " << frames[(numFrames / 100 * 99) -1] << std::endl;
	std::cout << "Highest Frame: " << frames[numFrames - 2] << std::endl;

}

int main(int argc, char* argv[])
{

	//NOTE: FULLSCREEN RESOLOUTION DOES NOT WORK WITH SCALED DISPLAYS!
	Globals::SCREEN_WIDTH = 1280;
	Globals::SCREEN_HEIGHT = 720;

	bool running = true;
	/*
	* Boilerplate code to initialise all of SDL
	*/
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return 1;
	}
	int imgFlags = IMG_INIT_PNG;

	if ((IMG_Init(imgFlags) != imgFlags))

	{
		std::cout << "Error: IMG: " << IMG_GetError() << std::endl;
		std::cout << IMG_Init(0) << std::endl;
	}

	if (TTF_Init() == -1) {
		std::cout << "Error: TTF: " << TTF_GetError() << std::endl;
	}

	int result = Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);

	// Check load
	if (result != 0) {
		std::cout << "Failed to open audio: " << Mix_GetError() << std::endl;
	}


	/*
	* Creating a window and renderer
	*/
	WINDOW = SDL_CreateWindow("MacGyver Engine PRE-APLHA", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		Globals::SCREEN_WIDTH, Globals::SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (WINDOW == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		return 1;
	}
	c_RENDERER = SDL_CreateRenderer(WINDOW, -1, SDL_RENDERER_ACCELERATED);
	if (c_RENDERER == NULL)
	{
		printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
		return 1;
	}

	/*
	* INITIALISE SINGLETON OBJECTS FOR:
	* ANIMATION
	* INPUT
	*/
	getAnimationHandler.attachRenderer(c_RENDERER);
	getInput;
	getMessenger;

	Macgyver::UI::Font font = Macgyver::UI::Font(c_RENDERER,
		"\\KirimomiSwash.ttf",
		256);

	getTextRenderer.addFont("test-font", &font);

	Macgyver::UI::Font font2(c_RENDERER,
	               "\\JetBrainsMono-Medium.ttf",
	              256);

	getTextRenderer.addFont("jetbrains", &font2);



	/*
	* MAIN GAME, CREATE ALL DATA BEFORE THE WHILE LOOP
	* CALL ALL UPDATES AND DRAWING WITHIN THE WHILE LOOP
	*/
	auto sc = 
		std::make_shared<Gameobjects::Scene>(
			Gameobjects::Scene("main"));
	sc->scene_RENDERER = c_RENDERER;

	Gameobjects::GameObject* button_TEST = new Gameobjects::GameObject();;
	sc->addObject(button_TEST);
	Macgyver::Gameobjects::Component* buttonBackground_TEST = new Gameobjects::Component();
	button_TEST->addComponent(buttonBackground_TEST);
	Macgyver::Components::UI::UIRenderable::AttachNew(buttonBackground_TEST, "\\button.png", 400, 150);


	Macgyver::Components::UI::UIRenderableData* DEBUG_buttonBackgroundData_TEST =
		componentGetData((buttonBackground_TEST), Macgyver::Components::UI::UIRenderableData);
	
	DEBUG_buttonBackgroundData_TEST->rect.x = 34785;
	sc.reset();
	sc = nullptr;
	DEBUG_buttonBackgroundData_TEST->outputAlive();

	return 0;


	Gameobjects::GameObject playerController;
	Gameobjects::GameObject camera;

	Gameobjects::GameObject UIcam;
	Gameobjects::GameObject UItext;

	sc->addObject(&playerController);
	sc->addObject(&camera);
	sc->addObject(&UIcam);
	sc->addObject(&UItext);


	Gameobjects::Component playerSprite;
	Gameobjects::Component playerMovement;
	Gameobjects::Component playerState;
	Gameobjects::Component playerInputBuffer;
	playerController.addComponent(&playerSprite);
	playerController.addComponent(&playerMovement);
	playerController.addComponent(&playerState);
	playerController.addComponent(&playerInputBuffer);

	Gameobjects::Component cam;
	camera.addComponent(&cam);

	Gameobjects::Component UIcam_comp;
	UIcam.addComponent(&UIcam_comp);

	Gameobjects::Component UItext_comp;
	UItext.addComponent(&UItext_comp);


	Components::Renderable::AttachNew(&playerSprite, "", 525, 410);
	DemoProject::PlayerController::attachNew(&playerMovement);
	DemoProject::PlayerFSM::attachNew(&playerState);
	DemoProject::InputBuffer::attachNew(&playerInputBuffer);

	Components::Camera::AttachNew(&cam);

	Components::UI::UICamera::AttachNew(&UIcam_comp);

	SDL_Rect temp;
	temp.x = temp.y = 0;
	temp.w = 400;
	temp.h = 400;
	Components::UI::Text::attachNew(&UItext_comp,
		"test-font", "Hello World", 256, temp
	);
	Macgyver::Gameobjects::Component keyPressOverlay;
	UItext.addComponent(&keyPressOverlay);
	DemoProject::KeyPressedOverlay::attachNew(&keyPressOverlay,&UItext_comp);

	Gameobjects::GameObject button;
	sc->addObject(&button);

	button.transform.x = 400;
	button.transform.y = 200;

	Macgyver::Gameobjects::Component pressedDetector;
	button.addComponent(&pressedDetector);
	Macgyver::Components::UI::UIMouseDetector::attachNew(
		&pressedDetector, { 0,0,400,150 }, 10, 0b1
	);

	Macgyver::Gameobjects::Component buttonBackground;
	button.addComponent(&buttonBackground);
	Macgyver::Components::UI::UIRenderable::AttachNew(&buttonBackground, "\\button.png", 400, 150);
	
	
	Macgyver::Components::UI::UIRenderableData* DEUG_buttonBackgroundData =
	componentGetData((& buttonBackground), Macgyver::Components::UI::UIRenderableData);
	
	
	Macgyver::Gameobjects::Component buttonText;
	button.addComponent(&buttonText);
	buttonText.localTransform.x += 25;
	buttonText.localTransform.y += 15;
	Macgyver::Components::UI::Text::attachNew(&buttonText, "jetbrains", "Press", 128, { 0,0,400,150 });


	Macgyver::Gameobjects::GameObject gravity;
	Macgyver::Gameobjects::Component gravityComp;
	gravity.addComponent(&gravityComp);
	Macgyver::Components::GravityImpacting::attachNew(&gravityComp, -9.81);
	sc->addObject(&gravity);

	getSceneManager.addScene(sc);
	getSceneManager.setActiveScene("main");
	/*
	* INIITIALISE VALUES NEEDED FOR THE MAIN LOOP
	*/
	unsigned int last_time = SDL_GetTicks();
	unsigned int deltaTime;
	unsigned int curr_time;
	SDL_Event e;
	running = true;
	while (running)
	{
		curr_time = SDL_GetTicks();
		deltaTime = std::max(curr_time - last_time, static_cast<uint32_t>(1));
		
		/*
		* handle events within the while loop
		*/
		SDL_PumpEvents();
		while (SDL_PollEvent(&e) != 0)
		{
			switch (e.type)
			{
			case SDL_QUIT:
				running = false;
				break;

			case SDL_MOUSEWHEEL:
				getInput.INTERNAL_addMouseWheel(
					e.wheel.y
				);
				break;
			}
		}
		//TODO: figure out a way to cache the instance
	    getInput.update();
		getAnimationHandler.update(deltaTime);

		SDL_RenderClear(c_RENDERER);
		/*
		* Place update then drawing code here
		*/
		//sc.physicsUpdate(deltaTime);
		//sc.update(deltaTime);
		
	    getSceneManager.physicsUpdate(deltaTime);
		getSceneManager.update(deltaTime);
		SDL_RenderPresent(c_RENDERER);
		
		//std::cout << deltaTime << std::endl;
		last_time = curr_time;

		//std::cout << getMessenger[10] << std::endl;
		if (getMessenger[10] == 0b10) 
		{
			std::cout << "pressed" << std::endl;
		}
		//std::cout << playerController.transform.y << std::endl;
	}
	/*
	* HANDLE CLEAN UP HERE
	*/
	getAnimationHandler.closeAllAnimationData();
	getAnimationHandler.closeAllActiveAnimations();

	//Destroy renderer
	SDL_DestroyRenderer(c_RENDERER);

	//Destroy window
	SDL_DestroyWindow(WINDOW);

	DEUG_buttonBackgroundData->outputAlive();

	//Quit SDL subsystems
	SDL_Quit();
	return 0;
}
