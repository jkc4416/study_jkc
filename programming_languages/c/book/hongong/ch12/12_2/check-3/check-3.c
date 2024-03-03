#include <stdio.h>
#include <string.h>


char* get_result(char* pa);  // 함수 선언

int main(void) {

    char str[80];
    char* res;

    printf("단어 입력: ");
    scanf("%s", str);

    res = get_result(str);

    printf("입력한 단어: %s, 생략한 단어: %s\n", str, res);

}



char* get_result(char* pa) {
    
    char* po = pa;  // pa가 가리키는 첫 번째 주소를 포인터 변수 po에 저장
    int cnt = 0;
    int len = 0;

    len = strlen(pa);
    printf("단어 길이: %d\n", len);

    if (len > 5) {
        
        pa += 5;
        
        while(*pa != '\0') {
            *pa = '*';
            pa++;
        }
    }

    return po;
}
