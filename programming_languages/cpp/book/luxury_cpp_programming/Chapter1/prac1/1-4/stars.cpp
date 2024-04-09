#include <iostream>

int main() {
    for(int i = 1; i <= 4; i++) { // 외부 반복문: 4줄을 출력합니다.
        for(int j = 1; j <= i; j++) { // 내부 반복문: 각 줄마다 증가하는 별표의 수를 출력합니다.
            std::cout << "*";
        }
        std::cout << "\n"; // 한 줄을 출력한 후에는 개행 문자로 줄을 바꿉니다.
    }
    return 0;
}
