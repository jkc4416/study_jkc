// Game.h
#ifndef GAME_H
#define GAME_H

#include "Human.h"
#include "Monster.h"
#include "Food.h"

class Game {
private:
    Human* human;
    Monster* monster;
    Food* food;

public:
    Game();
    ~Game();
    void play();
    void draw();
};

#endif
