#include <stdio.h>

int main() {
  FILE *arquivo;
  char nomeArquivo[100];
  int contadorLinhas = 0;
  char caractere;

  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);

  // Abre o arquivo em modo de leitura
  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    return 1;
  }

  // Conta o número de linhas no arquivo
  while ((caractere = fgetc(arquivo)) != EOF) {
    if (caractere == '\n') {
      contadorLinhas++;
    }
  }

  // Verifica se a última linha termina com quebra de linha
  fseek(arquivo, -1, SEEK_END);
  caractere = fgetc(arquivo);
  if (caractere != '\n') {
    contadorLinhas++;
  }

  // Fecha o arquivo
  fclose(arquivo);

  printf("O arquivo possui %d linha(s).\n", contadorLinhas);

  return 0;
}
