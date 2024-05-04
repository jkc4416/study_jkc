#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H

#include "Container.h"
#include <iostream>

class CoffeeVendingMachine {
private:
    Container tong[3]; // Arrays to store containers for coffee, water, and sugar (커피, 물, 설탕 용량을 각각 저장할 Container 객체를 저장할 수 있는 배열 선언)
public:
    CoffeeVendingMachine(); // Constructor  (기본 생성자 선언)
    void fill();            // Refills all containers to full capacity (모든 통을 최대 용량인 10으로 초기화)
    void selectEspresso();  // Dispenses an espresso (에스프레소 선택 시 커피 1, 물 1 소모)
    void selectAmericano(); // Dispenses an americano (아메리카노 선택 시 커피 1 물 2 소모)
    void selectSugarCoffee(); // Dispenses a sugar coffee (설탕커피 선택 시 커피 1, 물 2, 설탕 1 소모)
    void show();            // Displays the current contents of all containers (현재 커피, 물, 설탕 잔량 출력)
    void run();             // Runs the coffee vending machine interface (커피 자판기 작동)
};

#endif
