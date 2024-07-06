// main.cpp
#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
    MyStack mStack(100); // 용량이 100인 스택 생성
    int n;

    // 스택에 삽입할 5개의 정수를 입력받음
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for(int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n);  // 스택에 정수를 푸시
    }

    // 스택의 용량과 현재 크기를 출력
    cout << "스택 용량: " << mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;

    // 스택의 모든 원소를 팝하여 출력
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while(mStack.length() != 0) {
        cout << mStack.pop() << ' ';  // 스택에서 원소를 팝하여 출력
    }

    // 스택의 현재 크기를 출력
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;

    return 0; // 프로그램 종료
}
