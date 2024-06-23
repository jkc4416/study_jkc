#include "SmartTV.h"

// SmartTV 생성자: 인터넷 주소와 TV 크기를 받아서 초기화
SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {  // WideTV(size, true) 호출로 TV 크기와 비디오 입력 여부를 초기화
    this->ipAddr = ipAddr;  // 멤버 변수 ipAddr을 매개변수 ipAddr로 초기화
}

// 인터넷 주소를 반환하는 멤버 함수
string SmartTV::getIpAddr() {
    return ipAddr;
}
