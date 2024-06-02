#include "RectManager.h"

// 두 Rect 객체의 너비와 높이를 비교하여 동일한지 판별하는 함수
bool RectManager::equals(Rect r, Rect s) {
    // Rect 객체의 private 멤버인 width와 height에 접근하여 비교
    if (r.width == s.width && r.height == s.height) {
        return true;  // 너비와 높이가 모두 같으면 true 반환
    } else {
        return false;  // 다르면 false 반환
    }
}

// 한 Rect 객체의 너비와 높이를 다른 Rect 객체에 복사하는 함수
void RectManager::copy(Rect& dest, Rect& src) {
    // src의 width와 height 값을 dest에 복사
    dest.width = src.width;
    dest.height = src.height;
}
