#ifndef RECT_H
#define RECT_H

#include <string>
using namespace std;

// 게임 참가자를 나타내는 Person 클래스
class Rect {
private:
    int width, height;
public:
   Rect(int width, int height);
   friend bool equals(Rect r, Rect s);  // 프렌드 함수 선언
};

#endif
