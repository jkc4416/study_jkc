#include <iostream>

int main() {
    int sum = 0; // 합계를 저장할 변수를 0으로 초기화합니다.

    for(int i = 1; i <= 10; i++) {
        sum += i; // 1부터 10까지의 수를 순차적으로 더합니다.
    }

    std::cout << "1부터 10까지의 합은 " << sum << "입니다." << std::endl;
    return 0;
}