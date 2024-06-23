#include <iostream>
#include <string>
using namespace std;

// TV 클래스를 선언합니다.
class TV {
private:
    int size;  // TV 스크린의 크기를 저장하는 private 멤버 변수
public:
    // 기본 생성자: TV의 크기를 20으로 초기화
    TV() {
        size = 20; 
    }
    // 매개변수로 스크린 크기를 받아서 초기화하는 생성자
    TV(int size) {
        this->size = size;  // 멤버 변수 size를 매개변수 size로 초기화
    }
    // TV의 크기를 반환하는 멤버 함수
    int getSize() {
        return size;
    }
};

// TV 클래스를 상속받는 WideTV 클래스를 선언합니다.
class WideTV : public TV {
private:
    bool videoIn;  // 비디오 입력 가능 여부를 저장하는 private 멤버 변수
public:
    // WideTV 생성자: TV의 크기와 비디오 입력 여부를 초기화
    WideTV(int size, bool videoIn) : TV(size) {  // TV(size) 호출로 TV의 크기를 초기화
        this->videoIn = videoIn;  // 멤버 변수 videoIn을 매개변수 videoIn으로 초기화
    }
    // 비디오 입력 가능 여부를 반환하는 멤버 함수
    bool getVideoIn() {
        return videoIn;
    }
};

// WideTV 클래스를 상속받는 SmartTV 클래스를 선언합니다.
class SmartTV : public WideTV {
private:
    string ipAddr;  // 인터넷 주소를 저장하는 private 멤버 변수
public:
    // SmartTV 생성자: 인터넷 주소와 TV 크기를 받아서 초기화
    SmartTV(string ipAddr, int size) : WideTV(size, true) {  // WideTV(size, true) 호출로 TV 크기와 비디오 입력 여부를 초기화
        this->ipAddr = ipAddr;  // 멤버 변수 ipAddr을 매개변수 ipAddr로 초기화
    }
    // 인터넷 주소를 반환하는 멤버 함수
    string getIpAddr() {
        return ipAddr;
    }
};

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
