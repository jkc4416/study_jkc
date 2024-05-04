#include "CircleManager.h"
using namespace std;

int main() {
    int num;
    cout << "원의 개수 >> ";
    cin >> num;

    CircleManager manager(num);
    string name;
    int radius;

    for (int i = 0; i < num; i++) {
        cout << "원 " << (i + 1) << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        manager.setCircle(i, name, radius);
    }

    manager.searchByName();
    manager.searchByArea();

    return 0;
}
