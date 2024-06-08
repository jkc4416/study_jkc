#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Book a("청춘", 20000, 300);
    string b;
    cout << "책 이름을 입력하세요>>";
    getline(cin, b);

    if (a < b) {
        cout << b << "가 " << a.getTitle() << "보다 사전 순으로 앞에 있습니다." << endl;
    } else {
        cout << a.getTitle() << "가 " << b << "보다 사전 순으로 앞에 있습니다." << endl;
    }
    return 0;
}
