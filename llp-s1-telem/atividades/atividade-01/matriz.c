#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tam = 3;
    int l, c, mat[tam][tam];

    srand(time(NULL));

    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            mat[l][c] = rand() % 20;
        }
    }

    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][l]); // diagonal principal onde linha e coluna são iguais
    }

    return 0;
}