#include "Histogram.h"

// 생성자: 전달된 초기 텍스트에서 알파벳만 추출하여 소문자로 변환한 후 저장한다.
Histogram::Histogram(const std::string& initialText) {
    for (char c : initialText) {
        if (std::isalpha(c)) {  // 알파벳인지 확인
            text += std::tolower(c);  // 알파벳인 경우 소문자로 변경
        }
    }
}

// 문자열 추가 연산자 구현: 문자열을 받아 알파벳만 추출하여 소문자로 변환 후 저장
Histogram& Histogram::operator<<(const std::string& moreText) {
    for (char c : moreText) {
        if (std::isalpha(c)) {
            text += std::tolower(c);
        }
    }
    return *this;
}

// 문자 추가 연산자 구현: 단일 문자를 받아 알파벳일 경우 소문자로 변환 후 저장
Histogram& Histogram::operator<<(char c) {
    if (std::isalpha(c)) {
        text += std::tolower(c);
    }
    return *this;
}

// 출력 연산자 구현: 히스토그램을 그리는 로직
void Histogram::operator!() {
    int counts[26] = {0};  // 모든 원소가 0인 counts 배열 정의
    for (char c : text) {
        if (std::isalpha(c)) {
            counts[c - 'a']++;  // 알파벳임이 확인될 때마다 매칭되는 순번의 원소의 숫자 크기를 1씩 증가 
        }
    }

    std::cout << text << std::endl << std::endl;  // text 출력

    std::cout << "총 알파벳 수 " << text.length() << std::endl;  // 전체 알파벳 개수 출력
    for (int i = 0; i < 26; i++) {
        std::cout << char(i + 'a') << ":";
        for (int j = 0; j < counts[i]; j++) {
            std::cout << '*';  // 알파벳이 등장한 횟수만큼 '*' 출력
        }
        std::cout << std::endl;
    }
}
