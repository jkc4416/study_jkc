#include "SortedArray.h"
#include <iostream>

using namespace std;

int main() {
    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;  // +, = 연산자 작성 필요

    a.show();
    b.show();
    c.show();
}
