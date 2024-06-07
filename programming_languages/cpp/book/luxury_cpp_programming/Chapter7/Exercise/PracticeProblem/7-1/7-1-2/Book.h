#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
friend Book& operator+=(Book& book, int price);
friend Book& operator-=(Book& book, int price);

private:
    string title;
    int price, pages;

public:
    Book(string title="", int price=0, int pages=0);
    void show();
    string getTitle();
};

#endif
