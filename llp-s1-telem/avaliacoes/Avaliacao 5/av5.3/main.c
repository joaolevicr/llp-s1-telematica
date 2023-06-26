#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *arquivo;
  char nomeArquivo[100];
  int contadorVogais = 0;
  char caractere;

  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);

  // Abre o arquivo em modo de leitura
  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    return 1;
  }

  // Conta o número de vogais no arquivo
  while ((caractere = fgetc(arquivo)) != EOF) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||
        caractere == 'o' || caractere == 'u') {
      contadorVogais++;
    }
  }

  // Fecha o arquivo
  fclose(arquivo);

  printf("O arquivo possui %d letra(s) vogal(is).\n", contadorVogais);

  return 0;
}
