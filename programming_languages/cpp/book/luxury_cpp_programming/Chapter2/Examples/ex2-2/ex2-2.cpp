#include <iostream>

double area(int r);  // 함수의 원형 선언

double area(int r) {  // 함수 구현
    return 3.141592*r*r;
}

int main() {
    int n=3;
    char c='#';
    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';
    std::cout << "면적은" << area(n) << std::endl;  // 함수 area의 리턴값 출력
}