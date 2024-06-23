#ifndef TV_H
#define TV_H

#include <iostream>
using namespace std;

// TV 클래스를 선언합니다.
class TV {
private:
    int size;  // TV 스크린의 크기를 저장하는 private 멤버 변수
public:
    TV();  // 기본 생성자 선언
    TV(int size);  // 매개변수로 스크린 크기를 받아서 초기화하는 생성자 선언
    int getSize();  // TV의 크기를 반환하는 멤버 함수 선언
};

#endif // TV_H
