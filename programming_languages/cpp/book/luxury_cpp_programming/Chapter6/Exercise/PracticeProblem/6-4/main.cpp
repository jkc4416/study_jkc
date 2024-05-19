#include <iostream>
#include "MyVector.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    MyVector vec1;  // 기본 생성자 호출
    MyVector vec2(50);  // 크기가 50인 배열 생성, 값은 기본값 0으로 초기화
    MyVector vec3(30, 5);  // 크기가 30인 배열 생성, 값은 5로 초기화

    // 생성된 벡터의 내용을 출력하여 확인
    cout << "vec1: " << endl;
    vec1.checkVector();

    cout << "vec2: " << endl;
    vec2.checkVector();

    cout << "vec3: " << endl;
    vec3.checkVector();

    return 0;
}
