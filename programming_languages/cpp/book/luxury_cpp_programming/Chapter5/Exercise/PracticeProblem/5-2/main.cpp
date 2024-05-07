#include <iostream>
using namespace std;

// 함수 선언 
// half() 함수는 매개변수를 참조로 받기 때문에, 함수 내에서 value 변수를 변경하면 호출자의 변수 n 역시 영향을 받습니다. 
void half(double& value);

int main() {
    double n = 20;
    half(n);  // n의 반값을 구해 n을 바꾼다.
    cout << n << endl;  // 10이 출력된다.
    return 0;
}

// 함수 정의
void half(double& value) {
    value /= 3;  // 입력받은 변수의 값을 2로 나눔
}
