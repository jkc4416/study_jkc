#include "Sample.h"
#include <iostream>
using namespace std;

// Sample 클래스의 구현부
// 하나의 int 타입 매개변수를 받는 Sample 클래스 생성자 구현
Sample::Sample(int n) {
    size = n;
    p = new int [n]; // n개 정수 배열의 동적 생성, Sample 클래스의 멤버 포인터 변수 p에 배열의 첫 번째 원소 주소 저장
}
// 소멸자 구현
Sample::~Sample() {
    cout << "소멸자 실행" << endl;
    delete [] p;
}
// Sample 클래스의 read() 멤버 함수 구현
void Sample::read() {  // 동적 할당 받은 정수 배열 p에 사용자로부터 정수를 입력 받음
    for (int i=0; i<size; i++) {
        cout << i+1 << "번째 정수를 입력하세요." << endl;
        cin >> p[i]  ;
    }
}
// Sample 클래스의 write() 멤버 함수 구현
void Sample::write() {  // 정수 배열을 화면에 출력
    for (int i=0; i<size; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
}
// Sample 클래스의 big() 멤버 함수 구현
int Sample::big() {  // 정수 배열에서 가장 큰 수 리턴
    int max = 0;
    for (int i=0; i<size; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    return max;        
}