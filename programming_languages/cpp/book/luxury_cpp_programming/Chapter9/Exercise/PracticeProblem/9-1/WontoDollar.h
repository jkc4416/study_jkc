// WonToDollar.h
#ifndef WONTODOOLLAR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define WONTODOOLLAR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Converter.h" // Converter 클래스를 상속받기 위해 포함

// WonToDollar 클래스 정의: Converter 클래스를 상속받음
class WonToDollar : public Converter {
public:
    // 변환 비율을 초기화하는 생성자
    WonToDollar(double ratio) : Converter(ratio) {}

protected:
    // 원화를 달러로 변환하는 함수
    double convert(double src) override {
        return src / ratio; // 원화를 달러로 변환
    }

    // src 단위 명칭을 리턴하는 함수
    string getSourceString() override {
        return "원"; // 원화 단위 명칭 리턴
    }

    // dest 단위 명칭을 리턴하는 함수
    string getDestString() override {
        return "달러"; // 달러 단위 명칭 리턴
    }
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
