#include <stdio.h>

int main(void) {
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}