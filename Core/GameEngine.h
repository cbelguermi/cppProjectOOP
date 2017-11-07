//
// Created by Chloé Belguermi on 17/10/2017.
//

#ifndef NUMKINCH_GAMEENGINE_H
#define NUMKINCH_GAMEENGINE_H

#include <SDL.h>
#include "GameStateManager.h"

#define NB_PLAYERS 4


class GameEngine {

private:
    static GameEngine _gameEngine;
    static SDL_Window * _gameWindow;
    static SDL_Renderer * _gameRenderer;

    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;

    bool _running;


public:
    static GameEngine & get();

    static SDL_Window * getGameWindow();

    static SDL_Renderer * getGameRenderer();

    int getWindowWidth() const;

    int getWindowHeight() const;

    GameEngine(const GameEngine &) = delete; // avoid copy

    GameEngine & operator=(const GameEngine&) = delete; // avoid copy

private:
    GameEngine(); // avoid instancing

    ~GameEngine();

public:
    int onExecute();

    bool onInit();

    void handleEvents();

    void update();

    void render();

    void Quit();

    void onCleanup();
};


#endif //NUMKINCH_GAMEENGINE_H
