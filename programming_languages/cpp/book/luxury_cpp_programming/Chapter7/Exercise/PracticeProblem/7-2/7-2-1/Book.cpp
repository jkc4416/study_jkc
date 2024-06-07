#include "Book.h"

Book::Book(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show() const {
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

bool Book::operator==(const int right) const {
    return this->price == right;
}

bool Book::operator==(const string& right) const {
    return this->title == right;
}

bool Book::operator==(const Book& right) const {
    return (this->title == right.title) && (this->price == right.price) && (this->pages == right.pages);
}
