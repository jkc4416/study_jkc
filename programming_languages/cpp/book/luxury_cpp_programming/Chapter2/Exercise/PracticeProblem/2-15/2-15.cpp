#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2;
    char operation, prompt;

    // 무한 루프: 사용자가 프로그램을 종료하기 전까지 계속 실행
    while(true) {
        cout << "? ";
        cin >> num1 >> operation >> num2; // 사용자로부터 두 정수와 연산자를 입력받음

        switch(operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0) {  // 0으로 나누기 방지
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Cannot divide by zero" << endl;
                }
                break;
            case '%':
                if(num2 != 0) {  // 0으로 나누기 방지
                    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
                } else {
                    cout << "Error: Cannot divide by zero" << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation" << endl;
                break;
        }
    }

    return 0;
}
