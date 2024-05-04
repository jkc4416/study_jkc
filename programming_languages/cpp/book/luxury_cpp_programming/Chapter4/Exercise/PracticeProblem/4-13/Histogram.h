#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Histogram 클래스 선언부

class Histogram {
private:
// private 접근 제어자를 가지는 멤버 변수 선언
    string text;  // 텍스트를 저장할 문자열
    vector<int> counts;  // 'a'부터 'z'까지 각 글자 출현 빈도를 저장할 벡터 선언 (인덱스 0에는 a의 출현 빈도를, 인덱스 1에는 b의 출현 빈도를 저장하는 식으로 구현)
public:
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
    Histogram(const string &initial_text);  // 생성자: 초기 텍스트를 받음 (추가적인 메모리 할당과 복사 비용을 피하기 위해 string 타입의 참조를 매개변수로 받음, 또한 안전성 보장을 위해 const 키워드 사용)
    void put(const string &additional_text);  // 텍스트 추가 메소드 (추가적인 메모리 할당과 복사 비용을 피하기 위해 string 타입의 참조를 매개변수로 받음, 또한 안전성 보장을 위해 const 키워드 사용)
    void putc(char c);  // 단일 문자 추가 메소드
    void print();  // 히스토그램과 요약 정보 출력 메소드
};

#endif
