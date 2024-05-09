#include "Buffer.h"

// Buffer 클래스의 생성자 구현
Buffer::Buffer(string text) {
    this->text = text;
}

// 문자열을 추가하는 함수 구현
void Buffer::add(string next) {
    text += next;  // text 멤버에 next 문자열을 추가
}
// 문자열을 출력하는 함수 구현
void Buffer::print() {
    cout << text << endl;  // 저장된 문자열 출력
}