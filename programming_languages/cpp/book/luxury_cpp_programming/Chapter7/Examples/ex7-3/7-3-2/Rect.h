#ifndef RECT_H
#define RECT_H

// RectManager 클래스를 참조하기 위한 전방 선언
class RectManager; 

// Rect 클래스 선언부
class Rect {
private:
    int width, height;  // 사각형의 너비와 높이를 저장하는 private 멤버 변수

public:
    // Rect 클래스의 생성자 선언
    Rect(int width, int height);

    // RectManager 클래스의 모든 멤버 함수를 friend로 선언
    friend class RectManager;
};

#endif // RECT_H
