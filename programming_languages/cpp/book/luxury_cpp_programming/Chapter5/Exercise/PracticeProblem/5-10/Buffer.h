#ifndef BUFFER_H
#define BUFFER_H
#include <iostream>
using namespace std;
#include <string>

// Buffer 클래스 선언부

class Buffer {
private:
// private 접근 제어자를 가지는 멤버 변수 선언
    string text;  // 내부적으로 문자열을 저장하는 private 멤버 변수
public:
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
    Buffer(string text);  // 생성자: 객체를 초기화할 때 사용되며, 초기 문자열을 text에 할당합니다.
    void add(string next);  // 문자열을 추가하는 멤버 함수
    void print();  // 객체에 저장된 문자열을 출력하는 멤버 함수
};

#endif