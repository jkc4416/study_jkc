#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, address;
    int age;

    // 사용자로부터 이름 입력 받기
    cout << "이름을 입력하세요: ";
    getline(cin, name);

    // 사용자로부터 주소 입력 받기
    cout << "주소를 입력하세요: ";
    getline(cin, address);

    // 사용자로부터 나이 입력 받기
    cout << "나이를 입력하세요: ";
    cin >> age;

    // 입력 받은 정보 출력하기
    cout << "\n입력 받은 정보:" << endl;
    cout << "이름: " << name << endl;
    cout << "주소: " << address << endl;
    cout << "나이: " << age << "세" << endl;

    return 0;
}
