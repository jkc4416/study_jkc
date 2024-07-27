// Converter.h
#ifndef CONVERTER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define CONVERTER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함
#include <string> // 문자열 처리를 위해 포함

using namespace std; // std 네임스페이스를 사용

// Converter 추상 클래스 정의
class Converter {
protected:
    double ratio; // 변환 비율

    // src 값을 다른 단위로 변환하는 순수 가상 함수
    virtual double convert(double src) = 0;

    // src 단위 명칭을 리턴하는 순수 가상 함수
    virtual string getSourceString() = 0;

    // dest 단위 명칭을 리턴하는 순수 가상 함수
    virtual string getDestString() = 0;

public:
    // 변환 비율을 초기화하는 생성자
    Converter(double ratio) : ratio(ratio) {}

    // 변환을 실행하는 함수
    void run() {
        double src; // 입력 받을 src 값
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
        cout << getSourceString() << "을 입력하세요>> ";
        cin >> src; // 사용자로부터 src 값을 입력 받음
        cout << "변환 결과 : " << convert(src) << getDestString() << endl; // 변환 결과 출력
    }
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
