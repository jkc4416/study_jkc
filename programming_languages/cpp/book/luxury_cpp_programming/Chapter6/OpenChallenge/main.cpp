#include "UpAndDown.h"
#include "Person.h"

// main 함수: 프로그램의 진입점
int main() {
    string name1, name2;  // 선수 이름 저장을 위한 string 타입 변수 선언
    cout << "첫 번째 선수 이름 >> ";  
    cin >> name1;  // 첫 번째 선수 이름을 name1에 저장
    cout << "두 번째 선수 이름 >> ";
    cin >> name2;  // 두 번째 선수 이름을 name2에 저장

    Person p1(name1), p2(name2);  // Person 객체 생성 (string 타입 인자를 하나 받는 생성자 사용)
    UpAndDown::startGame(p1, p2);  // UpAndDown 클래스의 static 멤버 함수인 startGame 호출

    return 0;
}
