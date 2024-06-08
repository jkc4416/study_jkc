#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

// Book 클래스 선언부
class Book {
private:
    string title;
    int price, pages;

public:
    Book(string title="", int price=0, int pages=0);
    void show() const;
    string getTitle() const;
    bool operator<(const string& otherTitle) const;  // < 연산자 오버로딩
};

#endif
