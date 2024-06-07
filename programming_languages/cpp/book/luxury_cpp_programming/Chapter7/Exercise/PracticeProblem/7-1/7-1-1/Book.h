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
    void show();
    string getTitle();
    Book& operator+=(int price);
    Book& operator-=(int price);
};

#endif
