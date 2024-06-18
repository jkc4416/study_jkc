#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
    int x, y;  // 한 점(x, y) 좌표값
public:
    void set(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void showPoint() {
        cout << "{" << x << "," << y << "}" << endl;
    }
};

class ColorPoint : public Point {
private:
    string color;
public:
    void setColor(string color) {
        this->color = color;
    }
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
    if(x==p.x && y==p.y && color==p.color) {  // Point 클래스의 x, y는 protected 멤버이므로 파생 클래스인 ColorPoint에서 접근이 가능함
        return true;
    } else {
        return false;
    }
}

int main() {
    Point p;  // 기본 클래스 객체 생성
    p.set(2,3);  // set() 함수가 Point의 public 멤버이므로 컴파일 오류 발생하지 않음
    // p.x = 5;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    // p.y = 5;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    p.showPoint();

    ColorPoint cp;  // 파생 클래스 객체 생성
    // cp.x = 10;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    // cp.y = 10;  // 외부에서 protected 접근 지정자를 가지는 멤버 변수 접근 불가능
    cp.set(3,4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2))?"true":"false") << endl;
}