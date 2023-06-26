#include <stdio.h>

int main() {
  FILE *arquivo;
  char nomeArquivo[100];
  char caractere;
  int contadorOcorrencias = 0;

  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);

  printf("Digite o caractere: ");
  scanf(" %c", &caractere);

  // Abre o arquivo em modo de leitura
  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    return 1;
  }

  // Conta o número de ocorrências do caractere no arquivo
  int caractereLido;
  while ((caractereLido = fgetc(arquivo)) != EOF) {
    if (caractereLido == caractere) {
      contadorOcorrencias++;
    }
  }

  // Fecha o arquivo
  fclose(arquivo);

  printf("O caractere '%c' ocorre %d vez(es) no arquivo.\n", caractere,
         contadorOcorrencias);

  return 0;
}
