#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

// 게임 참가자를 나타내는 Person 클래스
class Person {
private:
    string name;  // 참가자 이름

public:
    Person(const string& name); // 생성자: 참가자의 이름을 설정
    string getName() const;     // 참가자 이름 반환
    int guess() const;          // 참가자로부터 추측값을 입력받음
};

#endif
