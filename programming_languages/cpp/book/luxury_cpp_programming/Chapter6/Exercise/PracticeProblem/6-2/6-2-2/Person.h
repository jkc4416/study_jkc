#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// Person 클래스 선언부
class Person {
private:
    int id;
    double weight;
    string name;

public:
    // 디폴트 매개변수를 가진 생성자 선언
    Person(int id = 1, string name = "Grace", double weight = 20.5);
    void show();  // 정보 출력 함수
};

#endif
