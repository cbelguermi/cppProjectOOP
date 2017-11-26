//
// Created by Chloé Belguermi on 20/11/2017.
//

#ifndef NUMKINCH_TEXT_H
#define NUMKINCH_TEXT_H

#include <SDL_ttf.h>

#define FONT_PATH "./res/fonts/VeraSe.ttf"

class Text {

private:
    TTF_Font * _font;

    SDL_Color _textColor;

    SDL_Surface * _surface;

    SDL_Texture * _texture;

    int _textWidth;

    int _textHeight;

    SDL_Rect _distanceRect;

public:
    Text(TTF_Font * font, Uint8 colorR, Uint8 colorG, Uint8 colorB, const char * text, int rectX, int rectY);

    void render();

    void cleanup();
};

#endif //NUMKINCH_TEXT_H