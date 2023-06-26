#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *arquivoEntrada, *arquivoSaida;
  char nomeArquivoEntrada[100];
  char nomeArquivoSaida[100];
  char caractere;

  printf("Digite o nome do arquivo de entrada: ");
  scanf("%s", nomeArquivoEntrada);

  printf("Digite o nome do arquivo de saída: ");
  scanf("%s", nomeArquivoSaida);

  // Abre o arquivo de entrada em modo de leitura
  arquivoEntrada = fopen(nomeArquivoEntrada, "r");

  if (arquivoEntrada == NULL) {
    printf("Não foi possível abrir o arquivo de entrada.\n");
    return 1;
  }

  // Abre o arquivo de saída em modo de escrita
  arquivoSaida = fopen(nomeArquivoSaida, "w");

  if (arquivoSaida == NULL) {
    printf("Não foi possível criar o arquivo de saída.\n");
    return 1;
  }

  // Lê o arquivo de entrada, substitui as vogais por '*' e escreve no arquivo
  // de saída
  while ((caractere = fgetc(arquivoEntrada)) != EOF) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||
        caractere == 'o' || caractere == 'u') {
      fputc('*', arquivoSaida);
    } else {
      fputc(caractere, arquivoSaida);
    }
  }

  // Fecha os arquivos
  fclose(arquivoEntrada);
  fclose(arquivoSaida);

  printf("Arquivo de saída criado com sucesso!\n");

  return 0;
}
