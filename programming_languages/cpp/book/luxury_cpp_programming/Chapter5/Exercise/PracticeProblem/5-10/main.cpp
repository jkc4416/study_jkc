#include <iostream>
#include "Buffer.h"
using namespace std;

// append 함수는 Buffer 객체에 문자열을 추가하고, 객체의 참조를 반환합니다.
Buffer& append(Buffer& buffer, string add) {
    buffer.add(add);  // Buffer 객체의 add 함수를 호출하여 문자열을 추가
    return buffer;  // 수정된 Buffer 객체에 대한 참조를 반환
}

int main() {
    Buffer buf("Hello");  // Buffer 객체 생성, 초기 문자열 "Hello"
    Buffer& temp = append(buf, "Guys");  // append 함수를 호출하여 "Guys" 문자열을 추가

    temp.print();  // "HelloGuys" 출력
    buf.print();  // "HelloGuys" 출력, temp와 buf는 동일한 객체를 참조

    return 0;
}
