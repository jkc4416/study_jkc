#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;  // 표준 네임스페이스 사용

// Circle 클래스 정의
class Circle {
private:
    int radius;  // 원의 반지름을 저장하는 private 멤버 변수
public:
    // 생성자: 초기 반지름을 인자로 받아 객체를 초기화합니다. 기본값은 0입니다.
    
    Circle(int r);

    // setRadius: 반지름을 설정하는 멤버 함수
    void setRadius(int r);

    // getRadius: 반지름을 반환하는 멤버 함수
    int getRadius() const;

    // swap 함수를 friend로 선언하여 private 멤버에 접근할 수 있도록 합니다.
    /*
    여기서 swap 함수는 Circle 클래스의 friend로 선언되어 있어, 이 함수는 Circle 클래스의 모든 private 및 protected 멤버에 접근할 수 있습니다. 
    friend 함수는 클래스 외부에 정의될 수 있지만, 클래스의 내부 멤버에 접근하는 권한을 갖습니다.
    */
    friend void swap(Circle& a, Circle& b);
};



#endif
