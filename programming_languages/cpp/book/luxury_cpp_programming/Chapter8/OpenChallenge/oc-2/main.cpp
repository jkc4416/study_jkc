// main.cpp
#include <iostream>
#include <vector>
#include "Product.h"
#include "Book.h"
#include "CompactDisc.h"
#include "ConversationBook.h"

using namespace std;

int main() {
    vector<Product*> products;  // 상품 목록을 저장할 벡터
    int choice;
    cout << "***** 상품 관리 프로그램을 작동합니다. *****" << endl;

    while (true) {
        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
        cin >> choice;
        cin.ignore();  // 버퍼 비우기

        if (choice == 1) {
            int type;
            cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
            cin >> type;
            cin.ignore();  // 버퍼 비우기

            string description, producer, isbn, author, title, language, albumTitle, singer;
            int price;

            cout << "상품설명>>";
            getline(cin, description);
            cout << "생산자>>";
            getline(cin, producer);
            cout << "가격>>";
            cin >> price;
            cin.ignore();  // 버퍼 비우기

            if (type == 1) {  // 책
                cout << "ISBN>>";
                getline(cin, isbn);
                cout << "책제목>>";
                getline(cin, title);
                cout << "저자>>";
                getline(cin, author);
                products.push_back(new Book(description, producer, price, isbn, author, title));
            } else if (type == 2) {  // 음악 CD
                cout << "앨범제목>>";
                getline(cin, albumTitle);
                cout << "가수>>";
                getline(cin, singer);
                products.push_back(new CompactDisc(description, producer, price, albumTitle, singer));
            } else if (type == 3) {  // 회화책
                cout << "ISBN>>";
                getline(cin, isbn);
                cout << "책제목>>";
                getline(cin, title);
                cout << "저자>>";
                getline(cin, author);
                cout << "언어>>";
                getline(cin, language);
                products.push_back(new ConversationBook(description, producer, price, isbn, author, title, language));
            }
        } else if (choice == 2) {  // 모든 상품 조회
            for (auto product : products) {
                product->show();
                cout << endl;
            }
        } else if (choice == 3) {  // 끝내기
            break;
        }
    }

    for (auto product : products) {
        delete product;  // 동적으로 할당된 상품 객체 삭제
    }

    return 0;
}
