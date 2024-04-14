#include "CoffeeMachine.h"
#include <iostream>

// 생성자 구현
CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) 
    : coffee(coffee), water(water), sugar(sugar) {}

// 에스프레소 제조
void CoffeeMachine::drinkEspresso() {
    if (coffee > 0 && water > 0) {
        coffee--;
        water--;
    }
}

// 아메리카노 제조
void CoffeeMachine::drinkAmericano() {
    if (coffee > 0 && water >= 2) {
        coffee--;
        water -= 2;
    }
}

// 설탕 커피 제조
void CoffeeMachine::drinkSugarCoffee() {
    if (coffee > 0 && water >= 2 && sugar > 0) {
        coffee--;
        water -= 2;
        sugar--;
    }
}

// 리필
void CoffeeMachine::fill() {
    coffee = 10;
    water = 10;
    sugar = 10;
}

// 상태 출력
void CoffeeMachine::show() const {
    std::cout << "커피 머신 상태, 커피: " << coffee << " 물: " << water << " 설탕: " << sugar << std::endl;
}
