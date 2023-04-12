#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m1[3][3] = {1, 2, 3, 3, 2, 1, 6, 7, 8};
    int m2[3][3] = {2, 2, 3, 3, 4, 4, 5, 4, 3};
    int resultado[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\n Matriz soma:\n");

    for (int k = 0; k < 3; k++) {
        printf("\n");
        for (int l = 0; l < 3; l++) {
            printf("%d, ", resultado[k][l]);
        }
    }
    return 0;
}