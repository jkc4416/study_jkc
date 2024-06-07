#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int price, pages;

public:
    Book(string title="", int price=0, int pages=0);
    void show() const;
    bool operator==(const int right) const;
    bool operator==(const string& right) const;
    bool operator==(const Book& right) const;
};

#endif
