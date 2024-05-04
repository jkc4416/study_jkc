#include "CoffeeVendingMachine.h"

// CoffeeVendingMachine 구현부

// CoffeeVendingMachine 클래스의 기본 생성자 구현
CoffeeVendingMachine::CoffeeVendingMachine() {
    fill(); // CoffeeVendingMachine 객체 생성 시 CoffeeVendingMachine 클래스의 fill() 멤버 함수를 실행해서 모든 통을 최대로 채움
}
// CoffeeVendingMachine 클래스의 fill() 멤버 함수 구현
void CoffeeVendingMachine::fill() {  
    for (int i = 0; i < 3; ++i) {
        tong[i].fill();   // CoffeeVendingMachine 클래스의 멤버 변수로 선언된 tong 배열에 저장된 각 Container 원소를 Container 클래스의 fill() 멤버 함수를 사용해서 최대 용량으로 초기화
    }
}
// CoffeeVendingMachine 클래스의 selectEspresso() 멤버 함수 구현
void CoffeeVendingMachine::selectEspresso() {
    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {  // Espresso를 만들기 위한 원료가 남아있는지 확인하는 부분
        tong[0].consume();
        tong[1].consume();
        std::cout << "에스프레소 드세요\n";
    } else {
        std::cout << "원료가 부족합니다.\n";
    }
}

void CoffeeVendingMachine::selectAmericano() {
    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {  // Americano를 만들기 위한 원료가 남아있는지 확인하는 부분
        tong[0].consume();
        tong[1].consume(2);
        std::cout << "아메리카노 드세요\n";
    } else {
        std::cout << "원료가 부족합니다.\n";
    }
}

void CoffeeVendingMachine::selectSugarCoffee() {  // SugarCoffee를 만들기 위한 원료가 남아있는지 확인하는 부분
    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
        tong[0].consume();
        tong[1].consume(2);
        tong[2].consume();
        std::cout << "설탕커피 드세요\n";
    } else {
        std::cout << "원료가 부족합니다.\n";
    }
}

void CoffeeVendingMachine::show() {  // 각 원료의 컨테이너에 남아있는 원료를 출력
    std::cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << std::endl;
}

void CoffeeVendingMachine::run() {
    int choice;
    std::cout << "***** 커피 자판기를 작동합니다. *****\n";
    while (true) {
        std::cout << "메뉴를 눌러주세요 (1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기) >> ";
        std::cin >> choice;
        switch (choice) {  // switch 문을 사용한 제어
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                show();
                break;
            default:
                std::cout << "잘못된 입력입니다. 다시 선택해 주세요.\n";
                break;
        }
    }
}
