#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int &b) {
    b = b + a;
    return b;
}

int main() {
    int s=10;
    int t=20;

    cout << add(s, t) << endl;  // 컴파일 오류 (참조 매개 변수로 인해 함수 호출이 모호함)
    
}