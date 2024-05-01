#include <iostream>
#include <string>
using namespace std;

// main() 함수 정의
int main() {
    string s;  // 문자열 객체 선언

    cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글은 안됨)" << endl;
    getline(cin, s, '\n');  // 문자열 입력
    int len = s.length();  // 문자열 길이 저장

    for(int i=0; i<len; i++) {
        string first = s.substr(0, 1);  // 입력한 문자열의 맨 앞 문자 1개를 새로운 문자열로 분리
        string sub = s.substr(1, len-1);  // 나머지 문자들을 다른 문자열로 분리
        s = sub + first;  // 두 문자열을 연결하여 새로운 문자열 생성
        cout << s << endl;
    }
}