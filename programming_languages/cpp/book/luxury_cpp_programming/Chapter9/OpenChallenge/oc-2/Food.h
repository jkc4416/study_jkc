// Food.h
#ifndef FOOD_H
#define FOOD_H

#include "GameObject.h"
#include <cstdlib>

class Food : public GameObject {
public:
    Food(int startX, int startY, int distance) : GameObject(startX, startY, distance) {}
    void move();
    char getShape() { return '@'; }
};

#endif
