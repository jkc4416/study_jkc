// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

// Product 클래스 정의: 기본 상품 클래스
class Product {
private:
    static int id_counter; // 상품 식별자를 자동으로 증가시키기 위한 정적 변수
    int id;                // 상품 식별자
    string description;    // 상품 설명
    string producer;       // 생산자
    int price;             // 가격

public:
    // 생성자
    Product(const string& desc, const string& prod, int price);

    // 상품 정보를 출력하는 가상 함수 (다형성을 위해 가상 함수로 선언)
    virtual void show() const;

    // 가상 소멸자 (다형성을 위해 필요)
    virtual ~Product();
};

#endif
