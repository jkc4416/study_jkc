#include <iostream>

int main() {
    for(int i = 1; i <= 100; i++) { // 1부터 100까지 반복합니다.
        std::cout << i << "\t"; // 숫자를 출력하고 탭으로 분리합니다.
        if(i % 10 == 0) { // 10개의 숫자를 출력한 후,
            std::cout << "\n"; // 새로운 줄로 넘어갑니다.
        }
    }
    return 0;
}
