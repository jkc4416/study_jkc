// Book.h
#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

// Book 클래스 정의: Product 클래스에서 파생
class Book : public Product {
private:
    string isbn;  // ISBN 번호
    string author; // 저자
    string title;  // 책 제목

public:
    // 생성자
    Book(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title);

    // 상품 정보를 출력하는 함수 재정의
    void show() const override;
};

#endif
