#include <iostream>
using namespace std;

float square(float a) {
    cout << "square(float a) 호출" << endl;
    return a*a;
}

double square(double a) {
    cout << "square(double a) 호출" << endl;
    return a*a;
}

int main() {
    cout << square(3.0);  // square(double a); 호출
    cout << square((float) 3.0);  // square(float a); 호출
    cout << square(3);  // 중복된 함수에 대한 모호한 호출로서 컴파일 오류를 발생시킴
}