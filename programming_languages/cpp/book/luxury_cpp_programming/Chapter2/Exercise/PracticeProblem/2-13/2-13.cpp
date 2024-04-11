#include <iostream>
#include <string>

using namespace std;

int main() {
    int menu; // 메뉴 번호를 저장할 변수
    int people; // 주문 인원수를 저장할 변수

    cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
    
    // 무한 루프를 시작하여 사용자 입력을 반복적으로 받음
    while(true) {
        cout << "짬뽕: 1, 짜장: 2, 군만두: 3, 종료: 4 >> ";
        cin >> menu; // 사용자로부터 메뉴 번호를 입력받음
        
        if(menu == 4) { // 종료 조건 검사
            cout << "오늘 영업은 끝났습니다." << endl;
            break; // 루프를 빠져나옴
        } else if(menu < 1 || menu > 4) { // 유효하지 않은 메뉴 번호를 입력받은 경우
            cout << "다시 주문하세요!!!" << endl;
            continue; // 루프의 다음 반복으로 넘어감
        }

        cout << "몇인분? ";
        cin >> people; // 사용자로부터 주문 인원수를 입력받음

        // 메뉴 번호에 따라 해당 음식을 출력
        switch(menu) {
            case 1:
                cout << "짬뽕 " << people << "인분 나왔습니다." << endl;
                break;
            case 2:
                cout << "짜장 " << people << "인분 나왔습니다." << endl;
                break;
            case 3:
                cout << "군만두 " << people << "인분 나왔습니다." << endl;
                break;
        }
    }

    return 0;
}
