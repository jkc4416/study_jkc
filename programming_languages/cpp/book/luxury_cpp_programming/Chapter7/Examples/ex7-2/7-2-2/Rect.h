#ifndef RECT_H
#define RECT_H

#include "RectManager.h"
#include <string>

using namespace std;

class RectManager;

// 게임 참가자를 나타내는 Person 클래스
class Rect {
private:
    int width, height;
public:
    Rect(int width, int height);
    friend class RectManager;
    friend bool RectManager::equals(Rect r, Rect s);  // 프렌드 함수 선언
    int getWidth();
    int getHeight();
};

#endif
