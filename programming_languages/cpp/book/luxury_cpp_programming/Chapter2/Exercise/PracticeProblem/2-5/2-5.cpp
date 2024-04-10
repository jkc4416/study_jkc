#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string input;
    int count = 0; // 'x'의 개수를 세는 변수

    cout << "문자들을 입력하세요 (엔터 키로 입력 종료): ";
    
    getline(cin, input); // 사용자로부터 한 줄을 입력받음

    // 입력받은 문자열을 순회하면서 'x'의 개수를 셈
    for(char c : input) {
        if(c == 'x') {
            count++;
        }
    }

    // 'x'의 개수를 출력
    cout << "입력된 'x'의 개수: " << count << endl;

    return 0;
}
