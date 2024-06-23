#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Product 클래스 정의: 기본 상품 클래스
class Product {
private:
    static int id_counter; // 상품 식별자를 자동으로 증가시키기 위한 정적 변수 (Product 객체들이 모두 함께 공유하는 클래스 변수)
    int id;                // 상품 식별자
    string description;    // 상품 설명
    string producer;       // 생산자
    int price;             // 가격

public:
    // 생성자
    Product(const string& desc, const string& prod, int price)
        : description(desc), producer(prod), price(price) {
        id = id_counter++; // 상품 식별자 자동 할당
    }

    // 상품 정보를 출력하는 함수
    /*
    - 가상 함수는 C++의 다형성(polymorphism)을 구현하기 위해 사용됩니다. 
        : 다형성은 객체 지향 프로그래밍의 중요한 개념 중 하나로, 같은 인터페이스를 사용하여 서로 다른 객체를 동일하게 다룰 수 있게 합니다. 
    - 가상 함수의 주요 목적과 기능은 다음과 같습니다
        : 목적
            동적 바인딩(dynamic binding): 컴파일 타임이 아닌 런타임에 함수 호출을 결정합니다.
            다형성(polymorphism): 부모 클래스 포인터를 사용하여 자식 클래스 객체를 참조할 때, 자식 클래스의 재정의된 함수를 호출할 수 있게 합니다.
        : 기능
            기반 클래스(Base Class)와 파생 클래스(Derived Class) 간의 일관된 인터페이스 제공:
            부모 클래스에 선언된 가상 함수를 자식 클래스에서 재정의(overriding)하면, 부모 클래스 포인터를 통해 자식 클래스의 함수를 호출할 수 있습니다.
            동적 바인딩: 가상 함수는 동적 바인딩을 통해 실행 시간에 실제 객체 타입에 맞는 함수를 호출합니다.
    */
    virtual void display() const {
        cout << "--- 상품ID: " << id << endl;
        cout << "상품설명: " << description << endl;
        cout << "생산자: " << producer << endl;
        cout << "가격: " << price << endl;
    }

    virtual ~Product() {} // 가상 소멸자
};

// 정적 변수 초기화
int Product::id_counter = 0;

// Book 클래스 정의: Product 클래스에서 파생
class Book : public Product {
private:
    string isbn;  // ISBN 번호
    string author; // 저자
    string title;  // 책 제목

public:
    // 생성자
    Book(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title)
        : Product(desc, prod, price), isbn(isbn), author(author), title(title) {}

    // 상품 정보를 출력하는 함수
    void display() const override {
        Product::display();
        cout << "ISBN: " << isbn << endl;
        cout << "책제목: " << title << endl;
        cout << "저자: " << author << endl;
    }
};

// CompactDisc 클래스 정의: Product 클래스에서 파생
class CompactDisc : public Product {
private:
    string album_title; // 앨범 제목
    string artist;      // 가수 이름

public:
    // 생성자
    CompactDisc(const string& desc, const string& prod, int price, const string& album_title, const string& artist)
        : Product(desc, prod, price), album_title(album_title), artist(artist) {}

    // 상품 정보를 출력하는 함수
    void display() const override {
        Product::display();
        cout << "앨범제목: " << album_title << endl;
        cout << "가수: " << artist << endl;
    }
};

// ConversationBook 클래스 정의: Book 클래스에서 파생
class ConversationBook : public Book {
private:
    string language; // 회화 책 언어

public:
    // 생성자
    ConversationBook(const string& desc, const string& prod, int price, const string& isbn, const string& author, const string& title, const string& language)
        : Book(desc, prod, price, isbn, author, title), language(language) {}

    // 상품 정보를 출력하는 함수
    void display() const override {
        Book::display();
        cout << "언어: " << language << endl;
    }
};

// main 함수: 프로그램 실행 시작점
int main() {
    vector<Product*> products; // Product 객체를 가리키는 포인터 배열
    /*
    위 코드에서 vector<Product*> products;는 C++의 표준 템플릿 라이브러리(STL) 중 하나인 vector를 사용하여 Product 객체를 가리키는 포인터를 저장하는 동적 배열을 선언하는 것입니다. 
    
    이 코드는 다음과 같은 의미를 갖습니다:
        - 템플릿 클래스 vector 사용:
            vector는 C++ 표준 라이브러리의 템플릿 클래스입니다. 
            동적 배열(dynamic array)로, 크기가 자동으로 조절되며 요소들을 순차적으로 저장할 수 있습니다.
            템플릿 클래스이므로, 저장할 요소의 타입을 지정해줄 필요가 있습니다. 
            여기서는 Product* 타입을 지정하여 Product 객체를 가리키는 포인터를 저장할 수 있는 벡터를 만듭니다.
        - Product* 타입:
            Product*는 Product 타입의 객체를 가리키는 포인터 타입입니다. 
            즉, Product 클래스의 객체의 주소를 저장할 수 있습니다.
            벡터의 각 요소는 Product 객체를 가리키는 포인터가 됩니다.
        - 벡터 선언:
            vector<Product*> products;는 Product 객체의 포인터를 저장할 수 있는 벡터 products를 선언합니다.
            초기에는 비어 있는 벡터이며, 필요에 따라 Product 객체의 포인터를 추가하거나 제거할 수 있습니다.
    */
    int choice;

    cout << "***** 상품 관리 프로그램을 작동합니다. *****" << endl;

    while (true) {
        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
        cin >> choice;

        if (choice == 1) { // 사용자가 상품을 추가하고자 하는 경우
            int type; // 추가할 상품의 종류를 저장할 변수
            cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
            cin >> type; // 사용자가 입력한 상품 종류를 type 변수에 저장

            string desc, prod; // 상품 설명과 생산자를 저장할 변수
            int price; // 상품의 가격을 저장할 변수
            cout << "상품설명>>";
            cin.ignore(); // 버퍼 비우기: 이전 입력에서 남은 개행 문자를 제거
            getline(cin, desc); // 상품 설명을 입력받아 desc 변수에 저장
            cout << "생산자>>";
            getline(cin, prod); // 생산자를 입력받아 prod 변수에 저장
            cout << "가격>>";
            cin >> price; // 가격을 입력받아 price 변수에 저장

            // 사용자가 책을 추가하고자 하는 경우
            if (type == 1) {
                string isbn, author, title; // ISBN, 저자, 책 제목을 저장할 변수
                cout << "ISBN>>";
                cin >> isbn; // ISBN을 입력받아 isbn 변수에 저장
                cout << "책제목>>";
                cin.ignore(); // 버퍼 비우기: 이전 입력에서 남은 개행 문자를 제거
                getline(cin, title); // 책 제목을 입력받아 title 변수에 저장
                cout << "저자>>";
                getline(cin, author); // 저자를 입력받아 author 변수에 저장
                // Book 객체를 생성하여 벡터에 추가
                products.push_back(new Book(desc, prod, price, isbn, author, title));
            } 
            // 사용자가 음악 CD를 추가하고자 하는 경우
            else if (type == 2) {
                string album_title, artist; // 앨범 제목과 가수 이름을 저장할 변수
                cout << "앨범제목>>";
                cin.ignore(); // 버퍼 비우기: 이전 입력에서 남은 개행 문자를 제거
                getline(cin, album_title); // 앨범 제목을 입력받아 album_title 변수에 저장
                cout << "가수>>";
                getline(cin, artist); // 가수 이름을 입력받아 artist 변수에 저장
                // CompactDisc 객체를 생성하여 벡터에 추가
                products.push_back(new CompactDisc(desc, prod, price, album_title, artist));
            } 
            // 사용자가 회화책을 추가하고자 하는 경우
            else if (type == 3) {
                string isbn, author, title, language; // ISBN, 저자, 책 제목, 언어를 저장할 변수
                cout << "책제목>>";
                cin.ignore(); // 버퍼 비우기: 이전 입력에서 남은 개행 문자를 제거
                getline(cin, title); // 책 제목을 입력받아 title 변수에 저장
                cout << "저자>>";
                getline(cin, author); // 저자를 입력받아 author 변수에 저장
                cout << "언어>>";
                getline(cin, language); // 언어를 입력받아 language 변수에 저장
                cout << "ISBN>>";
                cin >> isbn; // ISBN을 입력받아 isbn 변수에 저장
                // ConversationBook 객체를 생성하여 벡터에 추가
                products.push_back(new ConversationBook(desc, prod, price, isbn, author, title, language));
            }
        } 
        // 사용자가 모든 상품을 조회하고자 하는 경우
        else if (choice == 2) {
            // 벡터에 저장된 모든 상품 객체에 대해 display() 함수를 호출하여 정보를 출력
            for (const auto& product : products) {  // products 벡터 내 저장된 요소들을 순차적으로 product 변수에 할당하면서 for loop 실행됨
                product->display(); // 상품 정보 출력
                cout << endl; // 각 상품 사이에 빈 줄 추가
            }
        } 
        // 사용자가 프로그램을 종료하고자 하는 경우
        else if (choice == 3) {
            break; // while 루프를 빠져나감
        }
    }

    // 동적 할당된 메모리 해제
    for (auto& product : products) {
        delete product;
    }

    return 0;
}
