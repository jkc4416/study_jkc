/* 
깊은 복사 생성자를 가진 정상적인 Person 클래스
예제 5-10에 복사 생성자를 추가한 것 외에는 모두 동일함
*/

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    Person father(1, "Kitae");  // (1) father 객체 생성
    Person daughter(father);  // (2) daughter 객체 복사 생성, 복사 생성자 호출

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();  // (3) father 객체 출력
    daughter.show();  // (4) daughter 객체 출력   
    daughter.changeName("Grace");  // (4) daughter의 이름을 Grace로 변경

    cout << "daughter의 이름을 Grace로 변경한 후 ----" << endl;
    father.show();  // (5) father 객체 출력
    daughter.show();  // (5) daughter 객체 출력  

    return 0;  // (6), (7) daughter, father 객체 소멸
}