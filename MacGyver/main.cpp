#include <iostream>

//SDL imports
#include <SDL.h>
#include <SDL_image.h>
//#include <SDL_ttf.h>
#include <SDL_mixer.h>


//main engine framework imports
#include "Globals.h"
#include "Vector3.h"
#include "Scene.h"
#include "GameObject.h"
#include "Input.h"
#include "Camera.h"
#include "Renderable.h"


//extra components imports
#include "PlayerController.h"



using namespace Macgyver;

extern int Globals::SCREEN_WIDTH;
extern int Globals::SCREEN_HEIGHT;
SDL_Window* WINDOW;
SDL_Renderer* c_RENDERER;

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

	//if (TTF_Init() == -1) {
	//	std::cout << "Error: TTF: " << TTF_GetError() << std::endl;
	//}

	//int result = Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);

	// Check load
	//if (result != 0) {
	//	std::cout << "Failed to open audio: " << Mix_GetError() << std::endl;
	//}


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
	* MAIN GAME, CREATE ALL DATA BEFORE THE WHILE LOOP
	* CALL ALL UPDATES AND DRAWING WITHIN THE WHILE LOOP
	*/
	Gameobjects::Scene sc = Gameobjects::Scene();
	sc.scene_RENDERER = c_RENDERER;

	Gameobjects::GameObject cam = Gameobjects::GameObject();
	sc.addObject(&cam);

	Gameobjects::Component camera = Gameobjects::Component();
	cam.addComponent(&camera);
	Components::Camera::AttachNew(&camera);

	Gameobjects::GameObject player = Gameobjects::GameObject();
	sc.addObject(&player);

	Gameobjects::Component renderable = Gameobjects::Component();
	player.addComponent(&renderable);
	Components::Renderable::AttachNew(&renderable, "\\_Idle.png", 150, 200);
	player.transform.x = 100;
	player.transform.y = -100;

	Gameobjects::Component playerController = Gameobjects::Component();
	player.addComponent(&playerController);
	DemoProject::PlayerController::attachNew(&playerController);

	sc.addObject(&cam);

	

	/*
	* WHILE LOOP BEGINS HERE
	*/
	unsigned int last_time = SDL_GetTicks();
	unsigned int deltaTime;
	unsigned int curr_time;
	SDL_Event e;
	running = true;
	while (running)
	{
		curr_time = SDL_GetTicks();
		deltaTime = std::max(curr_time - last_time, (unsigned int)1);

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
			}
		}
		Input::update();
		
		SDL_RenderClear(c_RENDERER);

		/*
		* Place update then drawing code here
		*/
		sc.physicsUpdate(deltaTime);
		sc.update(deltaTime);

		SDL_RenderPresent(c_RENDERER);
		last_time = curr_time;
	}

	/*
	* HANDLE CLEAN UP HERE
	*/

	//Destroy renderer
	SDL_DestroyRenderer(c_RENDERER);

	//Destroy window
	SDL_DestroyWindow(WINDOW);

	//Quit SDL subsystems
	SDL_Quit();
	return 0;
}
