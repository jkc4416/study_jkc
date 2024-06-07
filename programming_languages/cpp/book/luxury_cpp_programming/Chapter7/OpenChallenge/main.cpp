#include "Histogram.h"

int main() {
    Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
    song << "falling" << "in love with you." << "- by ";
    song << 'k' << 'i' << 't';
    !song;  // 히스토그램 그리기
    return 0;
}
