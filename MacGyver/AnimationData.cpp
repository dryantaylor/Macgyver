#include "AnimationData.h"
#include <fstream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <vector>


Macgyver::Animations::AnimationData::AnimationData(SDL_Renderer* renderer, std::string path)
{
    //open the config file
    std::ifstream configFile(std::string(SDL_GetBasePath()) + path +
        "/config.txt");

    if (!configFile) {
        char errorBuffer[512];

        strerror_s(errorBuffer, 512, errno);
        throw std::invalid_argument(errorBuffer);
        return;
    };
    // Temporary buffer
    std::string temp;
    // does loop?
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
    numFrames = timings.size();
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

    //load the sprite sheet
    SDL_Texture* fullSheet = IMG_LoadTexture(
        renderer,
        (std::string(SDL_GetBasePath()) + path + "/sprites.png").c_str()
    );
    sprites = new SDL_Texture * [numFrames];
    Uint32 format = 1;
    SDL_QueryTexture(fullSheet, &format, NULL, NULL, NULL);
    SDL_Rect srcRect(0, 0, size.w, size.h);
    for (int i = 0; i < numFrames; i++) {
        sprites[i] = SDL_CreateTexture(
            renderer,
            format,
            SDL_TEXTUREACCESS_TARGET,
            size.w, size.h);
        //allows rendering to the specified texture through
        //the renderer
        SDL_SetRenderTarget(renderer, sprites[i]);
        srcRect.x = positions.at(2 * i);
        srcRect.y = positions.at(2 * i + 1);
        SDL_RenderCopy(renderer, fullSheet, &srcRect, NULL);
    }
    //returns rendering to the window
    SDL_SetRenderTarget(renderer, NULL);
    //sweet preventing memory leaks
    SDL_DestroyTexture(fullSheet);
}

Macgyver::Animations::AnimationData::~AnimationData()
{
    for (int i = 0; i < numFrames; i++) {
        SDL_DestroyTexture(sprites[i]);
    }
    delete[] frameTimes;
}
