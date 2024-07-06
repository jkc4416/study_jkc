// main.cpp
#include <iostream>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

int main() {
    // 잉크젯 프린터와 레이저 프린터 객체를 동적으로 생성
    InkJetPrinter *inkjet = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter *laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
    inkjet->show();
    laser->show();

    char cont = 'y';
    while (cont == 'y') {
        int type, pages;
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>> ";
        cin >> type >> pages;

        try {
            if (type == 1) {
                inkjet->print(pages);
            } else if (type == 2) {
                laser->print(pages);
            }
            cout << "프린트하였습니다." << endl;
        } catch (const runtime_error &e) {  // catch (const runtime_error &e)는 runtime_error 타입의 예외를 잡아냅니다.
            cout << e.what() << endl;  // runtime_error 예외가 발생하면 e.what() 메서드를 호출하여 예외 메시지를 출력합니다. e.what()은 예외의 원인을 설명하는 문자열을 반환합니다.
        }

        inkjet->show();
        laser->show();

        cout << "계속 프린트 하시겠습니까(y/n)>> ";
        cin >> cont;
    }

    // 동적으로 생성된 객체 삭제
    delete inkjet;
    delete laser;

    return 0;
}
