#include <stdio.h>

int main(void) {
    char animal[5][20];
    int count;

    count = sizeof(animal) / sizeof(animal[0]);

    for (int i=0; i<count; i++) {
        scanf("%s", animal[i]);
    }

    for (int j=0; j<count; j++) {
        printf("%s\n", animal[j]);
    }

    return 0;
}