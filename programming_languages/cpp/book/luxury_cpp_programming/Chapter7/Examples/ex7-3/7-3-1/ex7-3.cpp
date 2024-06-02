#include <iostream>
using namespace std;

class Rect;  // Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기 위한 선언문

class RectManager {  // RectManager 클래스 선언
public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

class Rect {
private:
    int width, height;
public:
    Rect(int width, int height) {
        this->width = width;
        this->height = height;
    }
    friend RectManager;  // RectManager 클래스의 모든 함수를 프렌드 함수로 선언
};

bool RectManager::equals(Rect r, Rect s) {
    if(r.width==s.width && r.height==s.height) {
        return true;
    } else {
        return false;
    }
}

void RectManager::copy(Rect& dest, Rect& src) {
    dest.width = src.width;
    dest.height = src.height;
}

int main() {
    Rect a(3,4), b(5,6);
    RectManager man;

    man.copy(b, a);  // a를 b에 복사 (객체 b의 width와 height가 a와 같아짐)

    if (man.equals(a, b)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
}