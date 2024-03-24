#include <stdio.h>

struct list
{
    int num;
    struct list *next;  // 구조체 자신을 가리키는 포인터 멤버
};

int main(void) {
    struct list a = {10, 0};  // 구조체 멤버 중 next 포인터 멤버의 값을 0으로 초기화
    struct list b = {20, 0};
    struct list c = {30, 0};

    struct list *head = &a;  // 구조체 멤버 a의 주소를 가리키는 head 포인터 변수 정의
    struct list *current;

    a.next = &b;  // 구조체 변수 b의 주소를 구조체 변수 a의 next 멤버에 저장
    b.next = &c;  // 구조체 변수 c의 주소를 구조체 변수 b의 next 멤버에 저장

    printf("head->num: %d\n", head->num);  // head가 가리키는 a의 num 멤버 사용
    printf("head=>next->num: %d\n", head->next->num);  // head로 b의 num 멤버 사용

    printf("list all: ");
    current = head;  // head 포인터 변수에 저장된 a의 주소를 current 포인터 변수에 저장
    
    while (current != NULL)  // 마지막 구조체 변수까지 출력하면 반복 종료
    {
        printf("%d ", current->num);
        current = current->next;   // current가 다음 구조체 변수를 가리키도록 함
    }
    printf("\n");

    return 0;
}