#include <stdio.h>

int main(void) {
    // 초기화 방법 1
    char animal1[5][10] = {
        {'d', 'o', 'g', '\0'},
        {'t', 'i', 'g', 'e', 'r', '\0'},
        {'r', 'a', 'b', 'b', 'i', 't', '\0'},
        {'h', 'o', 'r', 's', 'e', '\0'},
        {'c', 'a', 't', '\0'},
    };

    // 초기화 방법 2
    char animal2[][10] = {"dog", "tiger", "rabbit", "horse", "cat"};

    for (int i=0; i<5; i++) {
        printf("%s ", animal1[i]);
    }
    printf("\n");

    for (int i=0; i<5; i++) {
        printf("%s ", animal2[i]);
    }

    return 0;
}