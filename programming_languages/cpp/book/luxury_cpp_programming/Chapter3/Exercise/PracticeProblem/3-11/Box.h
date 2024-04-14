// Box.h
#ifndef BOX_H
#define BOX_H

// Box 클래스 선언부
class Box {
// private 접근 제어자를 가지는 멤버 변수 선정
private:
    int width, height;  // Dimensions of the box
    char fill;          // Character to fill the box with
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선정
public:
    Box(int w, int h);  // Constructor with width and height (int 타입 매개변수 두 개를 가지는 생성자)
    void setFill(char f);  // Set the fill character
    void setSize(int w, int h);  // Set size of the box
    void draw();  // Draw the box
};

#endif
