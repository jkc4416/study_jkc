// Trace.h
#ifndef TRACE_H
#define TRACE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Trace 클래스 선언부
class Trace {
private:
    static vector< pair<string, string> > traces;  // 태그와 디버깅 메시지를 저장하는 벡터
    /*
    - 정적 멤버 변수
        : static 키워드는 이 멤버 변수가 클래스의 모든 인스턴스에 공유된다는 것을 의미함
        : 즉, Trace 클래스의 어떤 객체에서도 동일한 traces 벡터를 사용하게 됨
    - 벡터
        : vector는 동적 배열을 제공하는 표준 템플릿 라이브러리(STL) 클래스
        : vector는 크기가 동적으로 변경될 수 있는 배열로, 요소를 동적으로 추가하거나 제거할 수 있음
    - pair<string, string>
        : pair는 두 개의 값을 하나로 묶어주는 STL 템플릿 클래스
        : 여기서는 pair<string, string>을 사용하여 두 개의 문자열을 하나로 묶어 저장함
    - 첫 번째 문자열
        : 태그(tag)를 저장
        : 태그는 디버깅 정보의 출처나 범주를 나타냄
    - 두 번째 문자열
        : 디버깅 메시지(message)를 저장
        : 이 메시지는 실제 디버깅 정보
    - traces
        : 이 벡터는 디버깅 정보를 저장
        : 각 요소는 pair<string, string> 타입으로, 하나의 디버깅 정보가 tag와 message로 구성됨
    - 이 traces 벡터는 Trace 클래스의 정적 멤버 변수로, 모든 Trace 객체가 공유함
    - 디버깅 정보를 추가할 때마다 traces 벡터에 새로운 pair가 추가됨
    */
public:
    // 디버깅 정보를 추가하는 함수
    // tag: 디버깅 정보를 구분하는 태그
    // message: 디버깅 메시지
    static void put(const string& tag, const string& message);

    // 디버깅 정보를 출력하는 함수
    // tag: 특정 태그를 출력할 때 사용, 기본값은 ""로 모든 정보를 출력
    static void print(const string& tag = "");
};

#endif
