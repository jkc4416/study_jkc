// Book.cpp
#include "Book.h"

// 생성자 정의
Book::Book(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title)
    : Product(desc, prod, price), isbn(isbn), author(author), title(title) {}

// 상품 정보를 출력하는 함수 재정의
void Book::show() const {
    Product::show(); // 기본 상품 정보 출력
    cout << "ISBN: " << isbn << endl;
    cout << "책제목: " << title << endl;
    cout << "저자: " << author << endl;
}
