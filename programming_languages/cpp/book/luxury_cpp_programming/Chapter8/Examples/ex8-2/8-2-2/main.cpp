#include "Point.h"

int main() {
    Point p;  // 기본 클래스의 객체 생성
    p.set(2, 3);  // set() 함수가 Point의 public 멤버이므로 컴파일 오류 발생하지 않음
    // p.x = 5;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    // p.y = 5;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    p.showPoint();  // Point의 showPoint() 호출, 좌표 출력

    ColorPoint cp;  // 파생 클래스의 객체 생성
    // cp.x = 10;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    // cp.y = 10;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    cp.set(3, 4);  // Point의 set() 호출, 좌표 설정
    cp.setColor("Red");  // ColorPoint의 setColor() 호출, 색상 설정

    ColorPoint cp2;  // 두 번째 파생 클래스 객체 생성
    cp2.set(3, 4);  // Point의 set() 호출, 좌표 설정
    cp2.setColor("Red");  // ColorPoint의 setColor() 호출, 색상 설정

    // cp와 cp2의 좌표와 색상을 비교하여 결과 출력
    cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

    return 0;
}
