// LoopAdder.h
#ifndef LOOPADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define LOOPADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함
#include <string> // 문자열 처리를 위해 포함

using namespace std; // std 네임스페이스를 사용

// LoopAdder 추상 클래스 정의
class LoopAdder {
private:
    string name; // 루프의 이름
    int x, y, sum; // x에서 y까지의 합을 저장할 변수
    void read(); // x, y 값을 입력받는 함수
    void write(); // sum을 출력하는 함수

protected:
    // 생성자: 루프의 이름을 초기화, 기본값은 빈 문자열
    LoopAdder(string name = "") {
        this->name = name;
    }

    // x 값을 반환하는 함수
    int getX() {
        return x;
    }

    // y 값을 반환하는 함수
    int getY() {
        return y;
    }

    // 순수 가상 함수: 루프를 돌며 합을 구하는 함수
    virtual int calculate() = 0;

public:
    // 연산을 진행하는 함수
    void run();
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
