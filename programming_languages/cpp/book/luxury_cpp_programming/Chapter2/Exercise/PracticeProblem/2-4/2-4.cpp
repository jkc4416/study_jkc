#include <iostream>
#include <limits> // std::numeric_limits를 사용하기 위함

int main() {
    double numbers[5]; // 5개의 실수를 저장할 배열
    double maxNumber = std::numeric_limits<double>::lowest(); // 최댓값 초기화. 가장 작은 double 값으로 설정

    std::cout << "5개의 실수를 입력하세요: ";

    for(int i = 0; i < 5; i++) {

        std::cin >> numbers[i]; // 사용자로부터 실수 입력받음
        
        if(numbers[i] > maxNumber) { // 현재 입력받은 수가 지금까지의 최댓값보다 크면
            maxNumber = numbers[i]; // 최댓값 갱신
        }
    }

    std::cout << "입력된 실수 중 가장 큰 수는: " << maxNumber << std::endl; // 최댓값 출력

    return 0;
}
