// ConversationBook.cpp
#include "ConversationBook.h"

// 생성자 정의
ConversationBook::ConversationBook(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title, const string& language)
    : Book(desc, prod, price, isbn, author, title), language(language) {}

// 상품 정보를 출력하는 함수 재정의
void ConversationBook::show() const {
    Book::show(); // 책 정보 출력
    cout << "언어: " << language << endl;
}
