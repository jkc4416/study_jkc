#ifndef RECTMANAGER_H
#define RECTMANAGER_H

#include "Rect.h"

// RectManager 클래스 선언부
class RectManager {
public:
    // 두 Rect 객체가 동일한지 비교하는 함수
    bool equals(Rect r, Rect s);

    // 한 Rect 객체의 값을 다른 Rect 객체에 복사하는 함수
    void copy(Rect& dest, Rect& src);
};

#endif // RECTMANAGER_H
