// CompactDisc.h
#ifndef COMPACTDISC_H
#define COMPACTDISC_H

#include "Product.h"

// CompactDisc 클래스 정의: Product 클래스에서 파생
class CompactDisc : public Product {
private:
    string album_title; // 앨범 제목
    string artist;      // 가수 이름

public:
    // 생성자
    CompactDisc(const string& desc, const string& prod, int price, const string& album_title, const string& artist);

    // 상품 정보를 출력하는 함수 재정의
    void show() const override;
};

#endif
