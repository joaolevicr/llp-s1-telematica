#include <stdio.h>

int main() {
  FILE *arquivo;

  // Cria o arquivo
  arquivo = fopen("arq.txt", "w");

  if (arquivo == NULL) {
    printf("Não foi possível criar o arquivo.\n");
    return 1;
  }

  printf("O arquivo 'arq.txt' foi criado com sucesso.\n");

  // Fecha o arquivo
  fclose(arquivo);

  // Abre o arquivo novamente em modo de leitura
  arquivo = fopen("arq.txt", "r");

  if (arquivo == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    return 1;
  }

  printf("O arquivo 'arq.txt' foi aberto com sucesso.\n");

  // Fecha o arquivo novamente
  fclose(arquivo);

  return 0;
}
