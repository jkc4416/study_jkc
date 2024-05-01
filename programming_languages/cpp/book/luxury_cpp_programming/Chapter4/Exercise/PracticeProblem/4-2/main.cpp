#include <iostream>
using namespace std;
int main() {

    int* numbers = new int[5];  // 동적으로 정수 배열 5개 공간 할당
    double sum = 0;  // 배열에 위치한 원소들의 합을 저장할 변수 선언

    cout << "정수 5개 입력>> ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // 사용자로부터 정수 입력
        sum += numbers[i];       // 입력 받은 정수를 합계에 더함
    }

    double average = sum / 5;    // 평균 계산
    cout << "평균 " << average << endl;  // 평균 출력

    delete[] numbers;  // 동적으로 할당된 메모리 해제
    return 0;
}
