#include <iostream>
#include "Circle.h"

int main() {
    Circle circles[3];  // Circle 객체 3개를 담는 배열
    int radius;

    for (int i = 0; i < 3; i++) {
        std::cout << "원 " << i + 1 << "의 반지름을 입력하세요: ";
        std::cin >> radius;
        circles[i].setRadius(radius);  // circles 배열의 각 Circle 원소별로 입력받은 반지름을 설정
    }

    int count = 0;  // 면적이 100을 초과하는 원의 개수를 세는 변수
    for (int i = 0; i < 3; i++) {
        if (circles[i].getArea() > 100) {  // 면적이 100보다 큰지 확인
            count++;
        }
    }

    std::cout << "면적이 100보다 큰 원의 개수: " << count << std::endl;

    return 0;
}
