#ifndef COLOR_H  // 중복 포함을 방지하기 위한 전처리 지시문
#define COLOR_H

#include <string>  // string 클래스를 사용하기 위해 표준 라이브러리의 헤더 파일 포함
using namespace std;  // std 네임스페이스의 모든 멤버에 대한 접근 권한을 부여

// Color 클래스 선언부
class Color {
// private 접근 제어자를 가지는 멤버 변수 선언 (클래스 외부에서 접근할 수 없는 멤버 변수를 선언)
private:
    string c;  // string 타입의 객체를 저장할 수 있는 변수 선언
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언 (클래스 외부에서 접근 가능한 생성자와 함수를 선언)
public:
    Color();  // 기본생성자 선언
    Color(string c);  // string 타입의 매개변수를 받는 생성자 선언
    ~Color();  // 소멸자 선언
};

#endif