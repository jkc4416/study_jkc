#include <iostream>
#include "Circle.h"
using namespace std;

/**
 * 두 Circle 객체의 반지름을 더하여 첫 번째 Circle 객체의 반지름을 업데이트하는 함수
 * 
 * @param a 첫 번째 Circle 객체의 참조 (이 객체의 반지름이 변경됨)
 * @param b 두 번째 Circle 객체의 참조 (이 객체의 반지름은 읽기만 수행)
 * 
 * 이 함수는 b 객체의 반지름을 a 객체의 반지름에 더하여 a 객체의 반지름을 업데이트합니다.
 * 반지름의 합은 a 객체의 setRadius 메소드를 통해 설정됩니다.
 */
void increaseBy(Circle& a, Circle& b) {
    int r = a.getRadius() + b.getRadius(); // a와 b의 반지름을 더한 값을 r에 저장
    a.setRadius(r); // a의 반지름을 r로 설정
}

/**
 * 프로그램의 주 실행 함수.
 * 
 * 이 함수는 두 개의 Circle 객체를 생성하고, 하나의 객체의 반지름을 다른 하나의 반지름만큼 증가시키는 예제를 보여줍니다.
 * 두 객체의 초기 반지름은 각각 10과 5로 설정됩니다.
 * increaseBy 함수를 호출하여 x 객체의 반지름을 y 객체의 반지름만큼 증가시킨 후,
 * 변경된 x 객체의 상태를 출력합니다.
 */
int main() {
    Circle x(10); // 반지름이 10인 Circle 객체 x 생성
    Circle y(5);  // 반지름이 5인 Circle 객체 y 생성
    increaseBy(x, y); // x의 반지름에 y의 반지름을 더해서 x의 반지름이 15인 원을 만들고자 한다.
    x.show();  // "반지름이 15인 원"을 출력한다.
}