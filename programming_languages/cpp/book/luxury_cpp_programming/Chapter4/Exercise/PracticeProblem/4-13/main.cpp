#include "Histogram.h"

int main() {
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");  // Histogram 객체 생성자를 호출하면서 초기 텍스트 처리
    elvisHisto.put("falling in love with you");  // 문자열 추가
    elvisHisto.putc('-');  // 문자 추가
    elvisHisto.put("Elvis Presley");  // 문자열 추가
    elvisHisto.print();  // 히스토그램 출력

    return 0;
}
