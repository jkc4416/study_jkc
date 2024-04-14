#ifndef INTEGER_H
#define INTEGER_H

#include <string>
using namespace std;

// Integer 클래스 선언부
class Integer {
// private 접근 제한자를 가지는 멤버 변수 선언
private:
    int value; // 정수 값을 저장하는 변수 (멤버 변수)

// public 접근 제한자를 가지는 생성자 및 멤버 함수 선언
public:
    Integer(int val); // 정수 값으로 초기화하는 생성자 (int 타입 매개변수가 한 개인 생성자)
    Integer(const string& str); // 문자열로 초기화하는 생성자 (string 타입 매개변수가 한 개인 생성자)
    int get() const; // 현재 정수 값을 반환
    void set(int val); // 정수 값을 설정
    bool isEven() const; // 값이 짝수인지 판별
};

#endif // INTEGER_H
