// Human.cpp
#include "Human.h"
#include <iostream>
using namespace std;

void Human::move() {
    char direction;
    cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
    cin >> direction;

    switch (direction) {
        case 'a': x -= distance; break;  // 왼쪽
        case 's': y += distance; break;  // 아래
        case 'd': y -= distance; break;  // 위
        case 'f': x += distance; break;  // 오른쪽
    }

    // 경계 체크
    if (x < 0) x = 0;
    if (x >= 20) x = 19;
    if (y < 0) y = 0;
    if (y >= 10) y = 9;
}
