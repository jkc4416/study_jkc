#include <iostream>
#include <string>
#include <vector>

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
    Product(const string& desc, const string& prod, int price)
        : description(desc), producer(prod), price(price) {
        id = id_counter++; // 상품 식별자 자동 할당
    }

    // 상품 정보를 출력하는 함수
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
    int choice;

    cout << "***** 상품 관리 프로그램을 작동합니다. *****" << endl;

    while (true) {
        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
        cin >> choice;

        if (choice == 1) {
            int type;
            cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
            cin >> type;

            string desc, prod;
            int price;
            cout << "상품설명>>";
            cin.ignore();
            getline(cin, desc);
            cout << "생산자>>";
            getline(cin, prod);
            cout << "가격>>";
            cin >> price;

            if (type == 1) {
                string isbn, author, title;
                cout << "ISBN>>";
                cin >> isbn;
                cout << "책제목>>";
                cin.ignore();
                getline(cin, title);
                cout << "저자>>";
                getline(cin, author);
                products.push_back(new Book(desc, prod, price, isbn, author, title));
            } else if (type == 2) {
                string album_title, artist;
                cout << "앨범제목>>";
                cin.ignore();
                getline(cin, album_title);
                cout << "가수>>";
                getline(cin, artist);
                products.push_back(new CompactDisc(desc, prod, price, album_title, artist));
            } else if (type == 3) {
                string isbn, author, title, language;
                cout << "책제목>>";
                cin.ignore();
                getline(cin, title);
                cout << "저자>>";
                getline(cin, author);
                cout << "언어>>";
                getline(cin, language);
                cout << "ISBN>>";
                cin >> isbn;
                products.push_back(new ConversationBook(desc, prod, price, isbn, author, title, language));
            }
        } else if (choice == 2) {
            for (const auto& product : products) {
                product->display();
                cout << endl;
            }
        } else if (choice == 3) {
            break;
        }
    }

    // 동적 할당된 메모리 해제
    for (auto& product : products) {
        delete product;
    }

    return 0;
}
