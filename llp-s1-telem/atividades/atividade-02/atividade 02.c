#include <stdio.h>

#define N 3  // Tamanho das matrizes

void calcular_soma_matrizes(int n, int A[][n], int B[][n], int C[][n]) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void imprimir_matriz(int n, int matriz[][n]) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    
    int B[N][N] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};
    
    int C[N][N];
    
    calcular_soma_matrizes(N, A, B, C);
    
    printf("Matriz A:\n");
    imprimir_matriz(N, A);
    
    printf("Matriz B:\n");
    imprimir_matriz(N, B);
    
    printf("Matriz C (A + B):\n");
    imprimir_matriz(N, C);
    
    return 0;
}