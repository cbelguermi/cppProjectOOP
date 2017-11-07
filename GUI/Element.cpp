//
// Created by Chloé Belguermi on 22/10/2017.
//

#include "Element.h"

Element::Element(const char * path) {

    _imagePath = path;
    _surface = nullptr;
    _texture = nullptr;
}

void Element::loadImage() {

    try {
        _surface = IMG_Load(_imagePath);
        if (_surface == nullptr)
            throw "Surface init failed";
    }
    catch (char * str) {
        SDL_ShowSimpleMessageBox(0, "Image init error", SDL_GetError(),
                                 GameEngine::getGameWindow());
    }
}

void Element::loadTexture() {

    try {
        _texture = SDL_CreateTextureFromSurface(GameEngine::getGameRenderer(), _surface);
        if (_texture == nullptr)
            throw "Texture init failed";
    }
    catch (char * str) {
        SDL_ShowSimpleMessageBox(0, "Texture init error", SDL_GetError(),
                                 GameEngine::getGameWindow());
    }
}

Element::~Element() {

    _imagePath = nullptr;
    _texture = nullptr;
    _surface = nullptr;
}

void Element::cleanup() {

    SDL_FreeSurface(_surface);
    SDL_DestroyTexture(_texture);
}