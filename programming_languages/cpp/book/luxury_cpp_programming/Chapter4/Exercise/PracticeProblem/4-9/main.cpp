#include <iostream>
#include "Person.h"

int main() {
    Person people[3];  // Person 객체 배열 선언
    string name, tel;  // string 타입 객체를 저장할 수 있는 name, tel 변수 선언

    cout << "이름과 전화 번호를 입력해주세요.\n";

    for (int i = 0; i < 3; i++) {
        cout << "사람 " << i+1 << " >> ";
        cin >> name >> tel;  // 이름과 전화번호 차례대로 입렭
        people[i].set(name, tel);  // 각 Person 객체에 이름과 전화번호 설정
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++) {
        cout << people[i].getName() << " ";
    }
    cout << endl;

    cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
    cin >> name;

    for (int i = 0; i < 3; i++) {
        if (people[i].getName() == name) {
            cout << "전화 번호는 " << people[i].getTel() << endl;
            break;
        }
    }


    return 0;
}
