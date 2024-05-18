#include <iostream>
#include "MyVector.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    MyVector *v1, *v2;
    v1 = new MyVector();  // 디폴트로 정수 배열 100 동적 할당
    v2 = new MyVector(1024);  // 정수 배열 1024 동적 할당

    delete v1;
    delete v2;
}
