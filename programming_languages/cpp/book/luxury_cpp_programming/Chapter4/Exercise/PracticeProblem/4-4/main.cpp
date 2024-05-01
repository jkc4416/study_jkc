#include "Sample.h"
#include <iostream>
using namespace std;

// main() 함수 정의
int main() {
    Sample s(10);  // 10개 정수 배열을 가지는 Sample 객체 생성
    s.read();
    s.write();
    cout << "가장 큰 수는 " << s.big()  << endl;  // 가장 큰 수 출력
    
}
