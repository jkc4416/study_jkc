#include <iostream>
#include <string>
#include "Integer.h"
using namespace std;

int main() {
    Integer n(30);
    cout << n.get() << ' ';  // 30 출력
    n.set(50);
    cout << n.get() << ' ';  // 50 출력

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();  // true(정수로 1) 출력
    cout << endl;
}