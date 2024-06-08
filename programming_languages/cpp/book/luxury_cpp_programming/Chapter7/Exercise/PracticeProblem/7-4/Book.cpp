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

// 책 제목 반환 함수
string Book::getTitle() const {
    return title;
}

// < 연산자 오버로딩
bool Book::operator<(const string& otherTitle) const {
    return title.compare(otherTitle) > 0;  // 사전 순으로 비교하여 입력된 제목이 더 앞선 경우 true 반환
}
