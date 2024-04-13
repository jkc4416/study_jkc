#include <iostream>
#include "Date.h"
using namespace std;

// main 함수 선언
int main() {
    Date birth(2014, 3, 20);  // 매개변수로 int 값 세 개를 받는 생성자를 통해 Data 클래스의 인스턴스 생성
    Date independenceDay("1945/8/15");  // 매개변수로 string 값을 받는 생성자를 통해 Data 클래스의 인스턴스 생성
    independenceDay.show();
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;
}