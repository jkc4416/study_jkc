#include "Book.h"

Book::Book(string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show() {
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

string Book::getTitle() {
    return title;
}

Book& Book::operator+=(int price) {
    this->price += price;
    return *this;
}

Book& Book::operator-=(int price) {
    this->price -= price;
    return *this;
}
