// Product.cpp
#include "Product.h"

// 정적 변수 초기화
int Product::id_counter = 0;

// 생성자 정의
Product::Product(const string& desc, const string& prod, int price)
    : description(desc), producer(prod), price(price) {
    id = id_counter++; // 상품 식별자 자동 할당 (Product 클래스의 이 생성자가 실행될 때마다 id_counter 정적 변수의 값을 1씩 증가시켜 id 인스턴스 변수에 저장)
}

// 상품 정보를 출력하는 함수 정의
void Product::show() const {
    cout << "--- 상품ID: " << id << endl;
    cout << "상품설명: " << description << endl;
    cout << "생산자: " << producer << endl;
    cout << "가격: " << price << endl;
}

// 가상 소멸자 정의
Product::~Product() {}
