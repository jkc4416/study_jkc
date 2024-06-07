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

Book& operator+=(Book& book, int price) {
    book.price += price;
    return book;
}

Book& operator-=(Book& book, int price) {
    book.price -= price;
    return book;
}
