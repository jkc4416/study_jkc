#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    Book cpp("명품C++", 10000);  // C++ 책 객체 생성
    Book java = cpp;            // java 객체를 cpp 객체로부터 깊은 복사
    java.set("명품자바", 12000); // java 객체의 제목과 가격 변경
    cpp.show();                 // cpp 객체의 정보 출력: 명품C++ 10000원
    java.show();                // java 객체의 정보 출력: 명품자바 12000원
}
