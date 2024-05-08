#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
    /*
    [find 함수]
    배열을 순회하며 주어진 문자 c를 찾습니다. 
    문자를 찾으면 그 위치의 참조를 반환하고 success를 true로 설정합니다. 
    배열의 끝에 도달했을 때까지 문자를 찾지 못하면, 정적 로컬 변수 dummy의 참조를 반환하고 success를 false로 설정합니다.
    */
    for (int i = 0; a[i] != '\0'; ++i) {  // a 배열을 순회하면서 문자 c를 찾습니다.
        if (a[i] == c) {  // 문자를 찾은 경우
            success = true; // success를 true로 설정
            return a[i]; // 해당 문자의 참조를 반환
        }
    }
    // 문자열에서 문자를 찾지 못한 경우:
    static char dummy; // 정적 변수로 임시 문자를 선언 (초기화하지 않음)
    success = false; // 문자를 찾지 못했으므로 success를 false로 설정
    return dummy; // dummy 참조 반환
}

int main() {
    char s[] = "Mike";  // 검색 대상 문자열
    bool b = false;  // 문자 찾기 성공 여부를 저장할 변수 선언
    char& loc = find(s, 'M', b);  // 'M' 문자 찾기 시도
    if (b == false) {  // 'M'을 찾지 못한 경우
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록
    cout << s << endl; // 변경된 문자열 출력
    return 0;
}
