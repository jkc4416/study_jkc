#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int radius;
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
public:
    Circle();
    ~Circle();
    void setRadius(int r);
    double getArea();
};

// Circle 클래스 구현부
// 기본 생성자 구현
Circle::Circle() {
    radius = 1;
}
// 소멸자 구현
Circle::~Circle() { }
// Circle 클래스 setRadius 멤버 함수 구현
void Circle::setRadius(int r) {
    radius = r;
}
// Circle 클래스 getArea 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}

// main() 함수 정의
int main() {  
    int n, radius;

    cout << "생성하고자 하는 원의 개수?";
    cin >> n; // 원의 개수 입력

    if(n <= 0) {
        cout << "0보다 큰 정수를 입력해주세요.";
        return 0;
    }

    Circle *pArray = new Circle [n];  // 동적 메모리 할당을 통한 n 개의 Circle 객체를 가지는 객체 배열 생성
    for(int i=0; i<n; i++) {
        cout << "원" << i+1 << ": ";
        cin >> radius;  // 각 Circle 객체별 radius 입력
        pArray[i].setRadius(radius);  // 각 Circle 객체를 입력한 반지름을 사용해서 개별적으로 초기화
    }

    int count = 0;  // 카운트 변수
    Circle* p = pArray;
    for(int i=0; i<n; i++) {
        cout << p->getArea() << ' ';
        if(p->getArea() >= 100 && p->getArea() <= 200) {
            count++;  // 조건 해당 시 카운트 변수 증가
        }
        p++;
    }
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
    delete [] pArray;  // 동적 메모리 할당을 통해 생성한 객체 배열 소멸
}

