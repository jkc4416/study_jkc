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
    // 생성자 선언
    Person();  // 기본 생성자
    Person(int id, string name);  // id와 name을 초기화하는 생성자
    Person(int id, string name, double weight);  // id, name, weight을 초기화하는 생성자
    void show();  // 정보 출력 함수
};

#endif
