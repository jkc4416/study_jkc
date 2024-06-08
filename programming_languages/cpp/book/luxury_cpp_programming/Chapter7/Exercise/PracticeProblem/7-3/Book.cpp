#include "Book.h"

// 생성자 정의
Book::Book(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

// 책 정보를 출력하는 멤버 함수
void Book::show() const {
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

// 공짜 책 판별 (! 연산자 오버로딩)
bool Book::operator!() const {
    return price == 0;  // 가격이 0이면 true 반환 (공짜)
}
