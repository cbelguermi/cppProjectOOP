//
// Created by Chloé Belguermi on 21/11/2017.
//

#ifndef NUMKINCH_CARD_H
#define NUMKINCH_CARD_H

#include "Room.h"
#include "BigCard.h"

class Card : public IHandleable, IDisplayable {

private:
    Room * _room; // don't delete it since it comes from a unique_ptr

    Button _backCardBtn;

    Tile _frontCardTile;

    int _positionX;

    int _positionY;

    bool _updatePlayer;

public:
    Card(Room * room, int column, int line);

    Room * getRoom();

    int getX() const;

    int getY() const;

    void setUpdate(bool update);

    bool updatePlayer() const;

    void init() override;

    void handleEvent(SDL_Event * event) override;

    void update();

    void render() override;

    void cleanup() override;

    ~Card();
};


#endif //NUMKINCH_CARD_H