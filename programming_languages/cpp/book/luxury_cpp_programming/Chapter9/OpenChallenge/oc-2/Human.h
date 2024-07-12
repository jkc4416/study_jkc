// Human.h
#ifndef HUMAN_H
#define HUMAN_H

#include "GameObject.h"

class Human : public GameObject {
public:
    Human(int startX, int startY, int distance) : GameObject(startX, startY, distance) {}
    void move();
    char getShape() { return 'H'; }
};

#endif
