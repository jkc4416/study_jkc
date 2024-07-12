// Food.cpp
#include "Food.h"

void Food::move() {
    int chance = rand() % 5;
    if (chance < 3) return;  // 5번 중 3번은 제자리

    int direction = rand() % 4;
    switch (direction) {
        case 0: x -= distance; break;  // 왼쪽
        case 1: y += distance; break;  // 아래
        case 2: y -= distance; break;  // 위
        case 3: x += distance; break;  // 오른쪽
    }

    // 경계 체크
    if (x < 0) x = 0;
    if (x >= 20) x = 19;
    if (y < 0) y = 0;
    if (y >= 10) y = 9;
}
