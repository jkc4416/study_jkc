#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

    char input_romeo[10];
    char input_juliet[10];

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    cout << "로미오>>";
    cin >> input_romeo;
    cout << "줄리엣>>";
    cin >> input_juliet;

    cout << input_romeo << endl;   
    cout << input_juliet << endl;

    if(strcmp(input_romeo, input_juliet)==0) {
        cout << "비겼습니다." << endl;
    }
    else {
        if (strcmp(input_romeo, "가위")==0) {
            if (strcmp(input_juliet, "바위")==0) {
                cout << "줄리엣이 이겼습니다." << endl;
            }
            else {
                cout << "로미오가 이겼습니다." << endl;
            }
        }
        else if (strcmp(input_romeo, "바위")==0) {
            if (strcmp(input_juliet, "보")==0) {
                cout << "줄리엣이 이겼습니다." << endl;
            }
            else {
                cout << "로미오가 이겼습니다." << endl;
            }
        }
        else {
            if (strcmp(input_juliet, "가위")==0) {
                cout << "줄리엣이 이겼습니다." << endl;
            }
            else {
                cout << "로미오가 이겼습니다." << endl;
            }            
        }
    }
}