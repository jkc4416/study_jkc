#include <stdio.h>

int main(void) {
    char* pary[5];
    int i;

    pary[0] = "dog";  // 문자열을 포인터 변수에 저장 시 첫 문자의 주소가 저장됨
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i=0; i<5; i++) {
        printf("%s\n", pary[i]);
    }

    return 0;
    
}