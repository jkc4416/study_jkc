#include <iostream>

int main() {
    for(int i = 1; i <= 9; i++) { // 1단부터 9단까지
        for(int j = 1; j <= 9; j++) { // 각 단의 1부터 9까지의 곱
            std::cout << j << "x" << i << "=" << i*j; // 곱셈 결과를 출력
            if(j < 9) std::cout << "\t"; // 항목들 사이에 쉼표와 공백을 추가
        }
        std::cout << "\n"; // 각 단이 끝날 때마다 줄바꿈
    }
    return 0;
}
