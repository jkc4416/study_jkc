#include "Book.h"

// 생성자
Book::Book(const char* title, int price) {
    this->title = new char[strlen(title) + 1];  // 제목을 위한 메모리 동적 할당 (마지막에 널 문자가 포함될 것까지 고려하여 배열 길이를 title 길이에 1을 더해서 메모리 할당)
    strcpy(this->title, title);                // 제목 복사 (매개변수 인자로 입력된 title을 this->title에 복사)
    this->price = price;                       // 가격 초기화
}

// 깊은 복사 생성자
Book::Book(const Book& other) {
    this->title = new char[strlen(other.title) + 1]; // 제목을 위한 메모리 할당
    strcpy(this->title, other.title);                // 제목을 다른 객체에서 복사
    this->price = other.price;                       // 가격을 다른 객체에서 복사
}

// 소멸자
Book::~Book() {
    delete[] title;  // 동적 할당된 메모리 해제
}

// 제목과 가격을 설정하는 함수
void Book::set(const char* title, int price) {
    delete[] this->title;                         // 기존 제목 메모리 해제(반환)
    this->title = new char[strlen(title) + 1];    // 새로운 제목을 위한 메모리 할당
    strcpy(this->title, title);                   // 새 제목 복사
    this->price = price;                          // 새 가격 설정
}

// 책의 정보를 출력하는 함수
void Book::show() {
    cout << this->title << " " << this->price << "원" << endl;  // 제목과 가격 출력
}
