#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

// CoffeeMachine 클래스 선언부
class CoffeeMachine {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int coffee; // 현재 커피 양
    int water;  // 현재 물 양
    int sugar;  // 현재 설탕 양

// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    CoffeeMachine(int coffee, int water, int sugar); // 매개변수를 세 개 가지는 생성자 선언
    void drinkEspresso(); // 에스프레소 제조 메서드
    void drinkAmericano(); // 아메리카노 제조 메서드
    void drinkSugarCoffee(); // 설탕 커피 제조 메서드
    void fill(); // 모든 재료 리필 메서드
    void show() const; // 상태 출력 메서드
};

#endif // COFFEEMACHINE_H
