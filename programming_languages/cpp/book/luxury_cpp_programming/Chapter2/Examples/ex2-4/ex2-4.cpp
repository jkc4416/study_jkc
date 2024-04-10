#include <iostream>
using namespace std;

int main() {
    cout << "이름을 입력하세요>>";

    char name[11];  // 한글은 5개 글자, 영문은 10개 글자까지 저장 가능
    cin >> name;

    cout << "이름은 " << name << " 입니다.\n";
}