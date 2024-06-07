#include "Book.h"

Book::Book(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show() const {
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

bool operator==(const Book& left, const int right) {
    return left.price == right;
}

bool operator==(const Book& left, const string& right) {
    return left.title == right;
}

bool operator==(const Book& left, const Book& right) {
    return (left.title == right.title) && (left.price == right.price) && (left.pages == right.pages);
}
