#include <iostream>
using namespace std;

class Calculator {
private:
    void input() {
        cout << "정수 2개를 입력하세요>> ";
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0;  // 두 정수의 합 리턴하는 순수 가상 함수 선언
public:
    void run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

class Adder : public Calculator {
protected:
    int calc(int a, int b) {  // 순수 가상 함수 구현
        return a + b;
    }
};

class Subtractor : public Calculator {
protected:
    int calc(int a, int b) {  // 순수 가상 함수 구현
        return a - b;
    }
};

int main() {
    Adder adder;
    Subtractor subtractor;

    adder.run();
    subtractor.run();
}