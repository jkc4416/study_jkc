// main.cpp
#include "NamedCircle.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    NamedCircle pizza[5]; // NamedCircle 객체 배열 선언

    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;

    // 사용자로부터 반지름과 이름을 입력받아 배열 요소 초기화
    for (int i = 0; i < 5; ++i) {
        int radius;
        string name;
        cout << i + 1 << ">> ";
        cin >> radius >> name;
        pizza[i].setRadius(radius);
        pizza[i].setName(name);
    }

    // 가장 면적이 큰 피자를 찾기 위한 변수 초기화
    double maxArea = 0;
    string maxPizzaName;

    // 배열을 순회하며 가장 면적이 큰 피자 찾기
    for (int i = 0; i < 5; ++i) {
        if (pizza[i].getArea() > maxArea) {
            maxArea = pizza[i].getArea();
            maxPizzaName = pizza[i].getName();
        }
    }

    // 결과 출력
    cout << "가장 면적이 큰 피자는 " << maxPizzaName << "입니다." << endl;

    return 0; // 프로그램 종료
}
