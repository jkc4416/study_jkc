#include "Stack.h"

// 스택에 데이터를 푸시하는 연산자 오버로딩
Stack& Stack::operator<<(int value) {
    data.push_back(value);  // 벡터의 끝에 데이터 추가
    return *this;  // 연속적으로 << 연산자 사용 가능
}

// 스택에서 데이터를 팝하는 연산자 오버로딩
Stack& Stack::operator>>(int& value) {
    if (!data.empty()) {
        value = data.back();  // 벡터의 마지막 요소를 가져옴
        data.pop_back();  // 벡터의 마지막 요소를 제거
    }
    return *this;  // 연속적으로 >> 연산자 사용 가능
}

// 스택이 비어 있는지 확인하는 연산자 오버로딩
bool Stack::operator!() const {
    return data.empty();  // 데이터가 비어있으면 true 반환
}
