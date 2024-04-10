#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "첫 번째 문자열을 입력하세요: ";
    getline(cin, str1);
    cout << "두 번째 문자열을 입력하세요: ";
    getline(cin, str2);

    if(str1 == str2) {
        cout << "같습니다." << endl;
    } else {
        cout << "같지 않습니다." << endl;
    }

    return 0;
}
