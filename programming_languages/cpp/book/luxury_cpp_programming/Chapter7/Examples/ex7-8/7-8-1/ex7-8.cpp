#include <iostream>
using namespace std;

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0) {
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    Power& operator++();  // 전위 ++ 연산자 함수 선언
};

void Power::show() {
    cout << "kick=" << kick << ", " << "punch=" << punch << endl;
}

Power& Power::operator++() {
    kick++;
    punch++;
    return *this;
    /*
    - this 포인터는 현재 객체를 가리키는 포인터
    - *this는 이 포인터가 가리키는 객체 자체를 참조하게 됨
    - 따라서, *this를 반환하는 것은 현재 객체 자체를 반환하는 것과 동일함
    - 이 방식은 연산자 오버로딩 함수에서 자기 자신을 반환할 때 유용하게 사용됨
    - 특히, 연산자 오버로딩 함수에서 참조를 반환할 때 체이닝(chaining) 호출을 가능하게 합니다.
    - 구체적 설명
        - this 포인터
            : this 포인터는 객체의 멤버 함수가 호출될 때 자동으로 전달되는 숨겨진 포인터
            : this는 현재 객체의 주소를 가리킴
            : 모든 멤버 함수 내에서 this 포인터를 사용할 수 있음
        - *this의 의미
            : *this는 this 포인터가 가리키는 객체를 참조
            : 즉, *this는 현재 객체 그 자체
    */
}

int main() {
    Power a(3,5), b;
    a.show();
    b.show();
    b = ++a;
    a.show();
    b.show();
}