// GameObject.h
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
protected:
    int distance;  // 한 번에 움직이는 이동 거리
    int x, y;      // 현재 위치

public:
    GameObject(int startX, int startY, int distance) : x(startX), y(startY), distance(distance) {}
    virtual ~GameObject() {}  // 가상 소멸자
    virtual void move() = 0;  // 순수 가상 함수
    virtual char getShape() = 0;  // 순수 가상 함수
    int getX() const { return x; }
    int getY() const { return y; }
    bool collide(GameObject *p) const { return (this->x == p->getX() && this->y == p->getY()); }
};

#endif
