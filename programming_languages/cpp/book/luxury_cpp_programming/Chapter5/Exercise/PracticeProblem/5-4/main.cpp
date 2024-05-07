#include <iostream>
using namespace std;

// 두 수를 비교하여 큰 수를 참조 매개변수로 전달하고 동일 여부를 반환하는 함수
bool bigger(int a, int b, int& big) {
    if (a == b) {
        big = a;  // a와 b가 같다면, big에 a의 값을 저장
        return true;  // 두 수가 같으므로 true 반환
    } else if (a > b) {
        big = a;  // a가 더 큰 경우, big에 a의 값을 저장
    } else {
        big = b;  // b가 더 큰 경우, big에 b의 값을 저장
    }
    return false;  // 두 수가 다르므로 false 반환
}

int main() {
    int x, y, larger;
    cout << "Enter two integers: ";
    cin >> x >> y;  // 사용자로부터 두 정수 입력받기

    // bigger 함수를 호출하여 두 수 중 더 큰 수를 찾고, 결과에 따라 출력
    if (bigger(x, y, larger)) {
        cout << "Both numbers are the same: " << larger << endl;
    } else {
        cout << "The larger number is: " << larger << endl;
    }

    return 0;
}
