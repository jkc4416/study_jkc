#include "SmartTV.h"
#include <iostream>
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    // 32 인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 SmartTV 객체 htv 생성
    SmartTV htv("192.0.0.1", 32);
    // SmartTV의 크기를 출력
    cout << "size=" << htv.getSize() << endl;
    // 비디오 입력 가능 여부를 출력
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
    // 인터넷 주소를 출력
    cout << "IP=" << htv.getIpAddr() << endl;
    return 0;  // 프로그램 종료
}
