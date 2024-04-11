#include <iostream> // 표준 입출력 스트림 사용을 위한 헤더 파일
#include <string>   // std::string 사용을 위한 헤더 파일
#include <cctype>   // 문자 분류 함수 (예: isalpha, tolower) 사용을 위한 헤더 파일

using namespace std;

int main() {
    int counts[26] = {0}; // 알파벳별 출현 횟수를 저장할 배열 초기화, 각 요소는 0으로 초기화됨, 배열 요소 개수는 알파벳 개수만큼 확보
    char c; // 사용자로부터 입력받을 문자를 임시 저장할 변수

    // 사용자에게 텍스트 입력을 안내하는 메시지 출력
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";

    // 문자 ';'가 입력될 때까지 문자를 계속 읽는 반복문
    while(cin.get(c) && c != ';') {
        if(isalpha(c)) { // 입력받은 문자가 알파벳인지 확인
            c = tolower(c); // 입력받은 문자를 소문자로 변환
            counts[c - 'a']++; // 해당 알파벳의 카운트를 1 증가시킴
        }
    }

    int totalAlphabets = 0; // 입력된 텍스트에서 알파벳의 총 개수를 저장할 변수
    // 알파벳 'a'부터 'z'까지 각 알파벳의 출현 횟수와 그에 해당하는 '*'를 출력하는 반복문
    for(int i = 0; i < 26; i++) {
        totalAlphabets += counts[i]; // 총 알파벳 수 계산
        cout << (char)(i + 'a') << " (" << counts[i] << ") : "; // 알파벳과 해당 알파벳의 출현 횟수 출력
        for(int j = 0; j < counts[i]; j++) { // 출현 횟수만큼 '*' 출력
            cout << "*";
        }
        cout << endl; // 다음 알파벳의 정보를 새로운 줄에 출력하기 위해 줄바꿈
    }

    // 총 알파벳 수 출력
    cout << "총 알파벳 수 " << totalAlphabets << endl;

    return 0; // 프로그램 정상 종료
}
