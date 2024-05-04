#include "CircleManager.h"
#include <iostream>
#include <string>
using namespace std;

// CircleManager 클래스 구현부

// CircleManager 클래스의 생성자 구현 (int 타입 매개변수 하나를 인자로 받음)
CircleManager::CircleManager(int size) : size(size) {
    p = new Circle[size];  // CircleManager 클래스의 멤버 변수 size의 값을 이용해서 Circle 객체를 저장할 수 있는 배열을 동적으로 할당하고 포인터 변수 p에 저장 (포인터 변수 p에는 Circle 객체를 원소로 하는 배열의 주소를 저장할 수 있음)
}
// CircleManager 클래스의 소멸자 구현
CircleManager::~CircleManager() {
    delete[] p;  // 소멸자 호출 시 동적 할당 받은 메모리 반환
}
// CircleManager 클래스의 setCircle 멤버 함수 구현
void CircleManager::setCircle(int index, string name, int radius) {
    if (index >= 0 && index < size) {
        p[index].setCircle(name, radius);  // 포인터를 배열처럼 쓸 수 있음 -> 포인터가 가리키는 배열의 원소별로 이름과 반지름을 설정
        // (p+index)->setCircle(name, radius);  // 바로 위의 코드 라인 대신 사용 가능
    }
}
// CircleManager 클래스의 searchByName 멤버 함수 구현
void CircleManager::searchByName() {
    string name;  // 검색하고자 하는 이름을 저장할 지역 변수 선언
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name;  // name 변수에 검색하고자 하는 이름 저장
    for (int i = 0; i < size; i++) {
        if (p[i].getName() == name) {  // 포인터가 가리키는 배열 원소(Circle 객체)의 이름과 검색하고자 하는 이름과 비교
            cout << name << "의 면적은 " << p[i].getArea() << endl;  // 해당 이름을 가지는 원의 면적 리턴
            return;
        }
    }
    cout << "해당 이름의 원이 없습니다.\n";
}
// CircleManager 클래스의 searchByArea 멤버 함수 구현
void CircleManager::searchByArea() {
    double area;  // 기준이 되는 면적을 저장하기 위한 변수 선언
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;  // 면적 입력
    cout << area << "보다 큰 원을 검색합니다.\n";
    for (int i = 0; i < size; i++) {  
        if (p[i].getArea() > area) {  // 포인터가 가리키는 배열 원소(Circle 객체)의 면적을 기준 면적과 비교
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
        }
    }
    cout << endl;
}
