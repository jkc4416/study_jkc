#include <iostream>
using namespace std;

class Rect;  // Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기 위한 선언문

class RectManager {
public:
    bool equals(Rect r, Rect s);
};

class Rect {
private:
    int width, height;
public:
    Rect(int width, int height) {
        this->width = width;
        this->height = height;
    }
    friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
    if (r.width==s.width && r.height==s.height) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Rect a(3, 4), b(4, 5), c(3, 4);
    RectManager man;

    if(man.equals(a, b)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    if(man.equals(a, c)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
}