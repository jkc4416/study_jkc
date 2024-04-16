#include <iostream>
using namespace std;

int main() {
    int *p;  // int 타입 포인터 변수 선언

    p = new int;  // 힙으로부터 int 타입의 정수 공간 할당

    if(!p) {  // if(p==NULL)과 동일 (p가 NULL인 경우 메모리 할당받기 실패)
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;  // 할당 받은 정수 공간에 5 저장
    int n = *p;  // 간접참조연산자를 int 타입 포인터변수 p에 사용해서 p가 가리키는 값을 n에 저장
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
}