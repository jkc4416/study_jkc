#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <cstring>
using namespace std;

// Book 클래스 선언부

class Book {  // Book 클래스는 책의 제목과 가격을 관리합니다.
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    char* title;  // 책의 제목을 동적으로 저장하는 포인터
    int price;    // 책의 가격
// public 접근 제어자를 가지는 생성자, 복사 생성자, 소멸자, 멤버 함수 선언
public:
    // 생성자: 새 책 객체를 생성하고 제목과 가격을 초기화합니다.
    // @param title: 책의 제목을 나타내는 문자열
    // @param price: 책의 가격을 나타내는 정수
    Book(const char* title, int price);

    // 복사 생성자: 다른 책 객체로부터 깊은 복사를 수행하여 객체를 생성합니다.
    // @param other: 복사할 원본 Book 객체의 참조
    Book(const Book& other);

    // 소멸자: 동적으로 할당된 메모리를 해제합니다.
    ~Book();

    // set 함수: 책의 제목과 가격을 설정합니다.
    // @param title: 새로 설정할 제목
    // @param price: 새로 설정할 가격
    void set(const char* title, int price);

    // show 함수: 책의 정보를 출력합니다.
    void show();
};

#endif
