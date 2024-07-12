// Monster.h
#ifndef MONSTER_H
#define MONSTER_H

#include "GameObject.h"
#include <cstdlib>

class Monster : public GameObject {
public:
    Monster(int startX, int startY, int distance) : GameObject(startX, startY, distance) {}
    void move();
    char getShape() { return 'M'; }
};

#endif
