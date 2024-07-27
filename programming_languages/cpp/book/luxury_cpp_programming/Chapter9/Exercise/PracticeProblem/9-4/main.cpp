// main.cpp
#include "WhileLoopAdder.h" // WhileLoopAdder 클래스의 선언을 포함하기 위해 포함
#include "DoWhileLoopAdder.h" // DoWhileLoopAdder 클래스의 선언을 포함하기 위해 포함

int main() {
    WhileLoopAdder whileLoop("While Loop"); // WhileLoopAdder 객체 생성 및 초기화
    DoWhileLoopAdder doWhileLoop("Do while Loop"); // DoWhileLoopAdder 객체 생성 및 초기화

    whileLoop.run(); // WhileLoopAdder 객체의 run() 함수 실행
    doWhileLoop.run(); // DoWhileLoopAdder 객체의 run() 함수 실행

    return 0; // 프로그램을 정상 종료
}
