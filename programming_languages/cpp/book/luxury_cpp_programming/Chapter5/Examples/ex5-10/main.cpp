/* 
얕은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우
(얕은 복사 생성자를 가진 경우, 객체 복사 시 프로그램이 비정상 종료되는 비극이 발생하는 예를 보임)
*/

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    Person father(1, "Kitae");  // (1) father 객체 생성
    Person daughter(father);  // (2) daughter 객체 복사 생성, 복사 생성자 호출 -> Person 클래스의 header 파일과 Person 클래스의 cpp 파일에 복사 생성자가 선언 및 구현되어있지 않으므로 컴파일러가 자동으로 디폴트 복사 생성자를 삽입함
    /*
    [참고] 컴파일러에 의해 자동으로 삽입되는 디폴트 복사 생성자
    Person::Person(const Person& p) {
        this->id = p.id;
        this->name = p.name;
    }
    */

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();  // (3) father 객체 출력
    daughter.show();  // (4) daughter 객체 출력   
    daughter.changeName("Grace");  // (4) daughter의 이름을 Grace로 변경

    cout << "daughter의 이름을 Grace로 변경한 후 ----" << endl;
    father.show();  // (5) father 객체 출력
    daughter.show();  // (5) daughter 객체 출력  

    return 0;  // (6), (7) daughter, father 객체 소멸
}