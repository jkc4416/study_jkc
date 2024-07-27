// WhileLoopAdder.h
#ifndef WHILELOOPADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define WHILELOOPADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "LoopAdder.h" // LoopAdder 클래스를 상속받기 위해 포함

// WhileLoopAdder 클래스 정의: LoopAdder 클래스를 상속받음
class WhileLoopAdder : public LoopAdder {
public:
    // 생성자: 루프의 이름을 초기화
    WhileLoopAdder(string name) : LoopAdder(name) {}

protected:
    // while 문을 이용하여 합을 구하는 함수
    int calculate() override;
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
