#include "WideTV.h"

// WideTV 생성자: TV의 크기와 비디오 입력 여부를 초기화
WideTV::WideTV(int size, bool videoIn) : TV(size) {  // TV(size) 호출로 TV의 크기를 초기화
    this->videoIn = videoIn;  // 멤버 변수 videoIn을 매개변수 videoIn으로 초기화
}

// 비디오 입력 가능 여부를 반환하는 멤버 함수
bool WideTV::getVideoIn() {
    return videoIn;
}
