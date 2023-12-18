#pragma once
#include "AnimationManager.h"
#include "AnimationHelpers.h"
#include <fstream>
Macgyver::Components::AnimationData::AnimationData(Gameobjects::Component* self, std::string path)
{
    //std::ifstream infile(std::string(SDL_GetBasePath()) + path);
    std::ifstream configFile(std::string(SDL_GetBasePath()) + path +
        "/config.txt");
    if (!configFile) std::cerr << "Can't open input file!";
    // Temporary buffer
    std::string temp;
    // does loop
    std::getline(configFile, temp);
    this->doesLoop = (temp == "1");

    //resoloution
    std::getline(configFile, temp);
    int splitIndex = temp.find(";");
    this->size.w = std::stoi(temp.substr(0, splitIndex));
    this->size.h = std::stoi(temp.substr(splitIndex + 1));

    //frame times
    std::vector<unsigned int> timings = {};
    std::getline(configFile, temp);
    std::size_t prevIndex = 0;
    std::size_t currIndex = temp.find(";");
    while (currIndex != std::string::npos) {
        timings.push_back(std::stoul(temp.substr(prevIndex, currIndex - prevIndex), nullptr));
        prevIndex = currIndex + 1;
        currIndex = temp.find(";", prevIndex);
    }
    numFrames = timings.size() ;
    frameTimes = new unsigned int[numFrames];

    for (int i = 0; i < numFrames; i++) {
        frameTimes[i] = timings.at(i);
    }
    //positions
    std::getline(configFile, temp);
    prevIndex = 0;
    currIndex = temp.find(";");
    std::vector<int> positions;
    while (currIndex != std::string::npos) {
        std::string coords = temp.substr(prevIndex, currIndex - prevIndex);
        int splitIndex = coords.find(",");
        positions.push_back(std::stoi(coords.substr(0, splitIndex)));
        positions.push_back(std::stoi(coords.substr(splitIndex + 1)));
        prevIndex = currIndex + 1;
        currIndex = temp.find(";", prevIndex);
    }
    //loading sprite sheet
    SDL_Renderer* renderer = self->getWorldScene()->scene_RENDERER;
    
    SDL_Texture* fullSheet = IMG_LoadTexture(
        renderer,
        (std::string(SDL_GetBasePath()) + path +"/sprites.png").c_str()
        );
    sprites = new SDL_Texture * [numFrames];
    Uint32 format = 1;
    SDL_QueryTexture(fullSheet, &format, NULL, NULL, NULL);
    SDL_Rect srcRect(0, 0, size.w, size.h);
    for (int i = 0; i < numFrames; i++) {
        sprites[i] = SDL_CreateTexture(
            self->getWorldScene()->scene_RENDERER,
            format,
            SDL_TEXTUREACCESS_TARGET,
            size.w, size.h);
        SDL_SetRenderTarget(renderer, sprites[i]);
        srcRect.x = positions.at(2 * i);
        srcRect.y = positions.at(2 * i + 1);
        SDL_RenderCopy(renderer, fullSheet, &srcRect, NULL);
    }
    SDL_SetRenderTarget(renderer,NULL);
    //delete format;
    //SDL_DestroyTexture(fullSheet);

	
}

Macgyver::Components::AnimationData::~AnimationData()
{
   //SDL_DestroyTexture(spriteSheet);
    //delete[] frameTimes;
    //delete[] frameRects;
}

Macgyver::Components::AnimationManagerData::AnimationManagerData()
{
    animations = {};
    idleAnimation = nullptr;
    frameTick = 0;
    currFrame = 0;
}

void Macgyver::Components::AnimationManagerData::setActiveAnimation(std::string name)
{
    if (animations.contains(name) && activeAnimation != animations.at(name)) {
        activeAnimation = animations.at(name);
    }
}

void Macgyver::Components::AnimationManager::update(Gameobjects::Component* self, unsigned int deltaTime)
{
    AnimationManagerData* managerData = (AnimationManagerData*)
        self->getData(typeid(AnimationManagerData).hash_code());

    managerData->frameTick += deltaTime; 
    AnimationData* activeAnimation = managerData->activeAnimation;
    //std::cout << "Current Tick " << managerData->frameTick << std::endl;
    //std::cout << "Max tick: " << activeAnimation->frameTimes[managerData->currFrame] << std::endl;

    while (managerData->frameTick >
        activeAnimation->frameTimes[managerData->currFrame]) {
        managerData->frameTick -= activeAnimation->frameTimes[managerData->currFrame];
        managerData->currFrame++;
        //if previously on last frame
        if (managerData->currFrame == activeAnimation->numFrames) {
            managerData->currFrame = 0;
            //if it doesn't loop swap to idle animation
            if (!activeAnimation->doesLoop) {
                managerData->activeAnimation = managerData->idleAnimation;
            }
        }
        //update renderable image to frame here
        managerData->attachedRenderable->texture =
            activeAnimation->sprites[managerData->currFrame];
        //std::cout << managerData->currFrame << std::endl;
        
    }
}

void Macgyver::Components::AnimationManager::AttachNew(Gameobjects::Component* comp, std::string path)
{
    AnimationManagerData* data = new AnimationManagerData();
    comp->addData((ComponentData*)data,
        typeid(AnimationManagerData).hash_code());
    comp->setComponentProperties(Components::ANIMATION);
    comp->update = Macgyver::Components::AnimationManager::update;
}
