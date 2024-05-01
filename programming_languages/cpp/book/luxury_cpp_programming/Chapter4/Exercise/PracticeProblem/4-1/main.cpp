#include "Color.h"
#include <iostream>
using namespace std;

// main() 함수 정의
int main() {
    Color screenColor(255, 0, 0);  // 빨간색의 screenColor 생성
    Color *p;  // Color 객체를 가리키는 포인터 변수 p 생성
    p = &screenColor;  // (1) p가 screenColor 객체의 주소를 가지도록 코드 작성
    p->show(); // (2) p와 show()를 이용해서 screenColor 색 출력
    Color colors[3];  // (3) Color의 1차원 배열 colors 선언, 원소는 3개
    p = colors;  // (4) p가 colors 배열을 가리키도록 코드 작성 (처음에 p는 colors 배열의 첫 번째 원소의 주소를 가리킴)

    // (5) p와 setColor()를 이용하여 colors[0], colors[1], colors[2]가 각각 빨강, 초록, 파랑색을 가지도록 코드 작성
    p->setColor(255, 0, 0);  // p는 colors 배열의 첫 번째 원소의 주소를 가리킴
    (p+1)->setColor(0, 255, 0);  // p+1은 colors 배열의 두 번째 원소의 주소를 가리킴
    (p+2)->setColor(0, 0, 255);  // p+2은 colors 배열의 세 번째 원소의 주소를 가리킴

    // (6) p와 show()를 이용하여 colors 배열의 모든 객체의 색 출력, for 문 이용
    for(int i=0; i<3; i++) {
        p->show();
        p++;  // p가 가리키는 주소를 다음 원소의 주소로 갱신
    }

}
