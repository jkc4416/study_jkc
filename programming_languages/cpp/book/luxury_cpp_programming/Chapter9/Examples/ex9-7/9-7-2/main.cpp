// main.cpp
#include "Adder.h" // Adder 클래스의 선언을 포함하기 위해 Adder.h 파일 포함
#include "Subtractor.h" // Subtractor 클래스의 선언을 포함하기 위해 Subtractor.h 파일 포함

int main() {
    Adder adder; // Adder 객체 생성
    Subtractor subtractor; // Subtractor 객체 생성

    adder.run(); // Adder 객체의 run() 함수 호출
    subtractor.run(); // Subtractor 객체의 run() 함수 호출

    return 0; // 프로그램을 정상 종료
}
