#include "Math.h"

// Math 클래스의 구현부

// Math 클래스의 abs 멤버 함수 구현
int Math::abs(int a) {
    return a>0?a:-a;
}
// Math 클래스의 max 멤버 함수 구현
int Math::max(int a, int b) {
    return (a>b)?a:b;
}
// Math 클래스의 min 멤버 함수 구현
int Math::min(int a, int b) {
    return (a>b)?b:a;
}