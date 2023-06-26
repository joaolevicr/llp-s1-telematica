#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void inicializarMatriz(int matriz[LINHAS][COLUNAS], int valor) {
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      matriz[i][j] = valor;
    }
  }
}

void somarMatrizes(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS],
                   int matrizC[LINHAS][COLUNAS]) {
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      matrizA[i][j] = matrizB[i][j] + matrizC[i][j];
    }
  }
}

void exibirMatriz(int matriz[LINHAS][COLUNAS]) {
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int matrizA[LINHAS][COLUNAS];
  int matrizB[LINHAS][COLUNAS];
  int matrizC[LINHAS][COLUNAS];

  // Inicializando as matrizes B e C
  inicializarMatriz(matrizB, 2);
  inicializarMatriz(matrizC, 3);

  // Calculando A = B + C
  somarMatrizes(matrizA, matrizB, matrizC);

  // Exibindo as matrizes A, B e C
  printf("Matriz A:\n");
  exibirMatriz(matrizA);

  printf("Matriz B:\n");
  exibirMatriz(matrizB);

  printf("Matriz C:\n");
  exibirMatriz(matrizC);

  return 0;
}
