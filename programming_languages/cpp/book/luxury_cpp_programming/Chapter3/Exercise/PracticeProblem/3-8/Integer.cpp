#include "Integer.h"
#include <string>
#include <cstdlib> // for std::stoi
using namespace std;

// 정수 값으로 private 멤버 변수를 초기화하는 생성자
Integer::Integer(int val) : value(val) {}

// 문자열로 private 멤버 변수를 초기화하는 생성자
Integer::Integer(const string& str) {
    value = stoi(str); // 문자열을 정수로 변환
}

// 현재 정수 값을 반환하는 메소드
int Integer::get() const {
    return value;
}

// 정수 값을 설정하는 메소드
void Integer::set(int val) {
    value = val;
}

// 값이 짝수인지 판별하는 메소드
bool Integer::isEven() const {
    return (value % 2 == 0);
}
