#include <iostream>
#include <string>
#include <algorithm>  // reverse 함수를 사용하기 위해 포함
using namespace std;

int main() {
    string input;  // 사용자 입력을 저장할 문자열 변수

    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)\n";
    while (true) {
        cout << ">> ";
        getline(cin, input);  // 사용자로부터 한 줄을 입력받음

        if (input == "exit") {  // 입력받은 문자열이 "exit"일 경우
            break;  // 프로그램 종료
        }

        // 문자열을 거꾸로 뒤집음
        reverse(input.begin(), input.end());

        // 뒤집힌 문자열 출력
        cout << input << endl;
    }
    return 0;
}
