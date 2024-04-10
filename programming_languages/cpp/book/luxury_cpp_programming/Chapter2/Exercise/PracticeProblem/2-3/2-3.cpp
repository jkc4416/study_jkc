#include <iostream>

int main() {
    int num1, num2;

    std::cout << "두 개의 정수를 입력하세요: ";
    std::cin >> num1 >> num2; // 사용자로부터 두 개의 정수를 입력받음

    if(num1 > num2) { // 첫 번째 수가 더 큰 경우
        std::cout << "큰 수는: " << num1 << std::endl;
    } else if(num2 > num1) { // 두 번째 수가 더 큰 경우
        std::cout << "큰 수는: " << num2 << std::endl;
    } else { // 두 수가 같은 경우
        std::cout << "두 수는 같습니다." << std::endl;
    }

    return 0;
}
