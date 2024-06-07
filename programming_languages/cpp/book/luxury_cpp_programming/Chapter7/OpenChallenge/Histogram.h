#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
#include <iostream>
#include <cctype>  // isalpha와 tolower 함수를 사용하기 위한 헤더

class Histogram {
private:
    std::string text;  // 히스토그램 데이터를 저장할 문자열

public:
    // 생성자: 초기 문자열을 받아서 알파벳만 저장한다
    Histogram(const std::string& initialText);

    // 문자열 추가 연산자: 더 많은 텍스트를 히스토그램에 추가한다 (오버로딩)
    Histogram& operator<<(const std::string& moreText);

    // 문자 추가 연산자: 단일 문자를 히스토그램에 추가한다 (오버로딩)
    Histogram& operator<<(char c);

    // 출력 연산자: 히스토그램을 출력한다
    void operator!();
};

#endif
