#ifndef WIDETV_H
#define WIDETV_H

#include "TV.h"

// TV 클래스를 상속받는 WideTV 클래스를 선언합니다.
class WideTV : public TV {
private:
    bool videoIn;  // 비디오 입력 가능 여부를 저장하는 private 멤버 변수
public:
    WideTV(int size, bool videoIn);  // WideTV 생성자 선언
    bool getVideoIn();  // 비디오 입력 가능 여부를 반환하는 멤버 함수 선언
};

#endif // WIDETV_H
