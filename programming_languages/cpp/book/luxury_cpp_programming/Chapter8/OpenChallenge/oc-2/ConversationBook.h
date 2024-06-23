// ConversationBook.h
#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include "Book.h"

// ConversationBook 클래스 정의: Book 클래스에서 파생
class ConversationBook : public Book {
private:
    string language; // 회화 책 언어

public:
    // 생성자
    ConversationBook(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title, const string& language);

    // 상품 정보를 출력하는 함수 재정의
    void show() const override;
};

#endif
