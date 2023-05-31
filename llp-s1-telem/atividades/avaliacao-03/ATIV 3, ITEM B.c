#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  char nome[50];
  int idade;
  float altura;
};

int main() {
  int quantidade;

  printf("Digite a quantidade de pessoas: ");
  scanf("%d", &quantidade);

  // Alocando memória para armazenar a estrutura de acordo com a quantidade
  // inserida
  struct Pessoa *pessoas = malloc(quantidade * sizeof(struct Pessoa));

  for (int i = 0; i < quantidade; i++) {
    printf("\nDigite os dados da pessoa %d:\n", i + 1);

    printf("Nome: ");
    scanf(" %[^\n]s", pessoas[i].nome);

    printf("Idade: ");
    scanf("%d", &pessoas[i].idade);

    printf("Altura: ");
    scanf("%f", &pessoas[i].altura);
  }

  printf("\nDados das Pessoas:\n");

  for (int i = 0; i < quantidade; i++) {
    printf("\nPessoa %d:\n", i + 1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
    printf("Altura: %.2f\n", pessoas[i].altura);
  }

  // Liberando a memória alocada
  free(pessoas);

  return 0;
}