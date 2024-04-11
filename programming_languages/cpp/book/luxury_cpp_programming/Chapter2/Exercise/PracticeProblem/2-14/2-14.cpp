#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char coffee[100];
    int num;
    int sum=0;

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
    
    // 무한 루프를 시작하여 사용자 입력을 반복적으로 받음
    while(true) {
        cout << "주문>> ";
        cin >> coffee >> num; // 사용자로부터 메뉴 이름과 잔 수를 입력 받음
        
        if(strcmp(coffee, "에스프레소") == 0) {
            cout << 2000*num <<"원입니다. 맛있게 드세요.\n";
            sum += 2000*num;
        } else if (strcmp(coffee, "카푸치노") == 0) {
            cout << 2500*num <<"원입니다. 맛있게 드세요.\n";
            sum += 2500*num;
        } else {
            cout << 2300*num <<"원입니다. 맛있게 드세요.\n";
            sum += 2300*num;
        }

        if (sum >= 20000) {
            cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
            break;
        }

    }
    return 0;
}
