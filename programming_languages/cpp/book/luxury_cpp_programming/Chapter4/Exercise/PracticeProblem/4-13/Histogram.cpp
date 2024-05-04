#include "Histogram.h"
#include <cctype> // 문자를 소문자로 변환하는 함수를 사용하기 위한 헤더
using namespace std;

// Histogram 클래스의 생성자 정의 (string 타입의 참조를 매개변수로 받음)
Histogram::Histogram(const string &initial_text) : counts(26, 0) {  // counts(26, 0) -> Histogram.h에서 counts라는 vector 타입의 변수가 선언된 것을 확인할 수 있음, 26개의 원소를 가지고 각 원소의 초깃값은 0인 vector 객체를 생성했다고 보면 됨
    put(initial_text);  // 초기 텍스트를 처리
}

// Histogram 클래스의 put 멤버 함수 정의 (추가 텍스트를 처리하는 메소드)
void Histogram::put(const string &additional_text) {
    for (char c : additional_text) {  // 'range-based for loop'를 사용해서 문자 처리
        if (isalpha(c)) {  // 알파벳인 경우에만 처리
            c = tolower(c);  // 소문자로 변환
            counts[c - 'a']++;    // 해당 알파벳의 개수 증가 (vector 타입 변수 counts에 저장된 각 알파벳별 출현 빈도 갱신)
        }
    }
    text += additional_text;      // 전체 텍스트에 추가
}

// Histogram 클래스의 putc 멤버 함수 정의 (단일 문자를 추가하는 메소드)
void Histogram::putc(char c) {
    text += c;  // 전체 텍스트에 문자 추가
    if (isalpha(c)) {  // 알파벳인 경우에만
        c = tolower(c);  // 소문자로 변환
        counts[c - 'a']++;  // 해당 알파벳의 개수 증가
    }
}

// Histogram 클래스의 print 멤버 함수 정의 (히스토그램을 출력하는 메소드)
void Histogram::print() {
    cout << text << endl << endl;  // 저장된 전체 텍스트 출력
    int total_letters = 0;  // 총 알파벳 수를 계산
    for (int count : counts) {
        total_letters += count;
    }

    cout << "총 알파벳 수 " << total_letters << endl << endl;
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " (" << counts[i] << ")    : ";
        for (int j = 0; j < counts[i]; j++) {
            cout << "*";  // 개수만큼 '*' 출력
        }
        cout << endl;
    }
}
