// GoodCalc.cpp
#include "GoodCalc.h" // GoodCalc 클래스의 선언을 포함하기 위해 GoodCalc.h 파일 포함

// GoodCalc 클래스의 멤버 함수 add() 정의
int GoodCalc::add(int a, int b) {
    return a + b; // 두 정수의 합을 리턴
}

// GoodCalc 클래스의 멤버 함수 subtract() 정의
int GoodCalc::subtract(int a, int b) {
    return a - b; // 두 정수의 차를 리턴
}

// GoodCalc 클래스의 멤버 함수 average() 정의
double GoodCalc::average(int a[], int size) {
    double sum = 0.0; // 합계를 저장할 변수 초기화
    for (int i = 0; i < size; i++) { // 배열의 크기만큼 반복
        sum += a[i]; // 배열의 각 요소를 합계에 더함
    }
    return sum / size; // 합계를 배열의 크기로 나누어 평균을 리턴
}
