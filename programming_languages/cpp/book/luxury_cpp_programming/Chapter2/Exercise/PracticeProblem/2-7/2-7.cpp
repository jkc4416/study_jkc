#include <iostream>
#include <cstring> // strcmp() 함수를 사용하기 위해 포함

using namespace std;

int main() {
    const int MAX_LENGTH = 256; // 입력 버퍼의 최대 길이
    char input[MAX_LENGTH]; // 사용자 입력을 저장할 문자 배열

    while(true) { // 무한 반복
        cout << "종료하려면 'yes'를 입력하세요: ";
        cin.getline(input, MAX_LENGTH); // 사용자로부터 한 줄 입력 받음

        // 입력된 문자열이 "yes"인지 확인
        if(strcmp(input, "yes") == 0) {
            break; // "yes"가 입력되면 반복문을 탈출하여 프로그램 종료
        }
    }

    return 0;
}
