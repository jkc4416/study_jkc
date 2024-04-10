#include <iostream> // C++에서 입출력을 위한 헤더 파일

int main() {
    int k, n = 0; // 변수 선언
    int sum = 0; // 합계를 저장할 변수

    // 사용자로부터 끝 수 입력 받기
    std::cout << "끝 수를 입력하세요>>";
    std::cin >> n;

    // 1부터 n까지의 합 계산
    for (k = 1; k <= n; k++) {
        sum += k;
    }

    // 계산된 합 출력
    std::cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.\n";

    return 0; // 프로그램 정상 종료
}
