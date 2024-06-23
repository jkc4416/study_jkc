// CompactDisc.cpp
#include "CompactDisc.h"

// 생성자 정의
CompactDisc::CompactDisc(const string& desc, const string& prod, int price, const string& album_title, const string& artist)
    : Product(desc, prod, price), album_title(album_title), artist(artist) {}

// 상품 정보를 출력하는 함수 재정의
void CompactDisc::show() const {
    Product::show(); // 기본 상품 정보 출력
    cout << "앨범제목: " << album_title << endl;
    cout << "가수: " << artist << endl;
}
