#include "RectManager.h"
#include "Rect.h"
#include <iostream>

bool RectManager::equals(Rect r, Rect s) {  // RectManager::equals() 구현
    if(r.getWidth() == s.getWidth() && r.getHeight() == s.getHeight()) {
        return true;
    } else {
        return false;
    }
}
