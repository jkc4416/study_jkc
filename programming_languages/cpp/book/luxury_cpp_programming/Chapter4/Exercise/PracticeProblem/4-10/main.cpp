#include <iostream>
#include "Family.h"

// main() 함수 정의
int main() {
    Family *simpson = new Family("Simpson", 3);  // 3명으로 구성된 Simpson 가족
    simpson->setName(0, "Mr. Simpson");  // 배열의 첫 번째 위치에 가족 이름 저장
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}
