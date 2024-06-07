#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(0, 0), b(5, 5);
    cout << "Initial values:\n";
    a.show();
    b.show();

    if (!a) {
        cout << "a의 파워가 0이다." << endl;
    } else {
        cout << "a의 파워가 0이 아니다." << endl;
    }
    if (!b) {
        cout << "b의 파워가 0이다." << endl;
    } else {
        cout << "b의 파워가 0이 아니다." << endl;
    }

    return 0;
}
