#include <iostream> // C++ 표준 입출력 스트림을 위한 헤더 파일

// sum 함수 정의: 두 정수 a와 b 사이의 모든 정수의 합을 계산하여 반환
int sum(int a, int b);

int main() {
    int n = 0; // 사용자로부터 입력받을 정수를 저장할 변수

    // 사용자에게 입력을 요청하는 메시지 출력
    std::cout << "끝 수를 입력하세요>>";
    // std::cin을 통해 사용자로부터 정수 입력 받기
    std::cin >> n;

    // sum 함수를 호출하여 1부터 n까지의 합을 계산하고, 그 결과를 출력
    std::cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
    return 0; // 프로그램 정상 종료
}

// sum 함수의 구현부
int sum(int a, int b) {
    int k, res = 0; // k: 반복문 제어 변수, res: 합계를 저장할 변수

    // a부터 b까지 반복하면서 각 정수를 res에 더함
    for (k = a; k <= b; k++) {
        res += k;
    }
    // 계산된 합계 반환
    return res;
}
