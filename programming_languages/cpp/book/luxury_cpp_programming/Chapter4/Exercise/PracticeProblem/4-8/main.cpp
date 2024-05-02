#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    int numCircles;  // 사용자로부터 입력받을 원의 개수

    cout << "원의 개수 >> ";
    cin >> numCircles;

    Circle* circles = new Circle[numCircles];  // 원의 개수에 따라 동적으로 Circle 배열 할당, Circle 객체를 담을 수 있는 포인터 변수 circles에 Circle 배열 첫 번째 원소의 주소 저장
    
    int radius;
    int count = 0;  // 면적이 100을 초과하는 원의 개수를 세는 변수

    for (int i = 0; i < numCircles; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> radius;
        (circles+i)->setRadius(radius);  // 입력받은 반지름을 설정  (포인터를 사용한 주소 접근 및 멤버 함수 사용)
        
        if ((circles+i)->getArea() > 100) {  // 면적이 100보다 큰지 확인  (포인터를 사용한 주소 접근 및 멤버 함수 사용)
            count++;
        }
    }

    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    delete [] circles;  // 동적으로 할당된 메모리 해제
    return 0;
}
