#include <iostream>
#include "Person.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();  // Grace 객체 정보 출력
    ashley.show();  // Ashley 객체 정보 출력
    helen.show();  // Helen 객체 정보 출력
    return 0;
}
