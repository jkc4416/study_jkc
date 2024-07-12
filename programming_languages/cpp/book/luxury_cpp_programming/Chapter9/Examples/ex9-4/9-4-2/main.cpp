// main.cpp
#include "Circle.h" // Circle 클래스의 선언을 포함하기 위해 Circle.h 파일을 포함

int main() {
    Circle circle; // Circle 객체 circle 선언
    Shape* pShape = &circle; // Shape 클래스의 포인터 pShape가 Circle 객체를 가리키도록 설정

    pShape->draw(); // draw()가 virtual이므로 동적 바인딩 발생, Circle의 draw() 호출
    pShape->Shape::draw(); // 범위 지정 연산자로 인해 정적 바인딩 발생, Shape의 draw() 호출

    return 0; // 프로그램을 정상 종료
}
