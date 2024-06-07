#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
friend bool operator==(const Book& left, const int right);
friend bool operator==(const Book& left, const string& right);
friend bool operator==(const Book& left, const Book& right);

private:
    string title;
    int price, pages;

public:
    Book(string title="", int price=0, int pages=0);
    void show() const;
};

#endif
