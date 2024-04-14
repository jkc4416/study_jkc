#include <iostream>
#include "Operations.h"

using namespace std;

// main 함수 정의
int main() {
    Add a;  // Add 클래스를 활용하여 a 인스턴스 생성
    Sub s;  // Sub 클래스를 활용하여 s 인스턴스 생성
    Mul m;  // Mul 클래스를 활용하여 m 인스턴스 생성
    Div d;  // Div 클래스를 활용하여 d 인스턴스 생성
    Operation* op; // 베이스 클래스 포인터를 사용하여 동적 바인딩 수행 (포인터 변수 정의)
    /*
    Operation* op:  
    포인터 변수의 선언은 C++에서의 다형성과 동적 바인딩을 활용하는 핵심적인 부분
    이 포인터 변수는 Operation 클래스 타입의 포인터로, Operation 클래스를 상속받은 어떤 파생 클래스의 객체도 가리킬 수 있음
    이를 통해 여러 다른 유형의 객체들을 통일된 인터페이스로 다루고, 실행 시간에 어떤 메소드가 호출될지 결정할 수 있음

    [포인터 변수의 역할]
    - 다형성 지원: 
        Operation 클래스의 포인터 op를 사용하여, Add, Sub, Mul, Div 등의 파생 클래스 객체를 가리킬 수 있음
        이러한 구조는 모든 파생 클래스가 Operation의 메서드를 공유하고 있음을 의미함
    - 동적 바인딩 실행: 
        프로그램 실행 중에 op 포인터를 통해 호출되는 calculate() 함수는 op가 실제로 가리키고 있는 객체의 타입에 따라 결정됨
        예를 들어, op가 Add 객체를 가리키고 있을 때 op->calculate()를 호출하면 Add 클래스의 calculate() 메소드가 실행됨
        이는 컴파일 시간이 아닌 실행 시간에 결정되므로 "동적 바인딩"이라고 부름
    - 유연한 코드 작성: 
        같은 코드 라인을 사용하여 다양한 연산을 수행할 수 있음
        예를 들어, 사용자 입력에 따라 op가 다른 객체를 가리키게 할 수 있으므로, 입력에 따라 다른 연산을 수행하는 것이 가능함
        이는 코드 수정 없이 새로운 연산 클래스를 추가하거나 변경하는 것을 간단하게 만들어 줌

    */
   
    int x, y;  // 두 정수를 저장할 변수 선언
    char oper;  // 연산자를 저장할 변수 선언

    while (true) {
        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> x >> y >> oper;
        switch (oper) {
            case '+':
                op = &a;  // Add 클래스로 생성한 인스턴스 a의 주소를 포인터 변수 op에 저장
                break;
            case '-':
                op = &s;
                break;
            case '*':
                op = &m;
                break;
            case '/':
                op = &d;
                break;
            default:
                cout << "지원하지 않는 연산자입니다." << endl;
                continue;
        }
        op->setValue(x, y);  // 
        cout << op->calculate() << endl;
    }
    return 0;
}
