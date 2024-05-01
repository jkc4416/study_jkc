#include <iostream>
#include <string>
using namespace std;

// main() 함수 정의
int main() {
    string names[5];  // string 배열 선언

    for(int i=0; i<5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }
    cout << "이름 입력 완료" << endl;

    cout << "string 배열에 입력된 이름 중 사전에서 가장 뒤에 나오는 문자열을 구합니다." << endl;
    string latter = names[0];
    for(int i=1; i<5; i++) {
        if(latter < names[i]) {
            latter = names[i];
        }
    }

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}