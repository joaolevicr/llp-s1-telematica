#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *arquivo;
  char nomeArquivo[100];
  int contadorLetras[26] = {0}; // Array para contar as letras do alfabeto
  char caractere;

  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);

  // Abre o arquivo em modo de leitura
  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    return 1;
  }

  // Conta a frequência de cada letra no arquivo
  while ((caractere = fgetc(arquivo)) != EOF) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo

    if (isalpha(caractere)) { // Verifica se é uma letra
      contadorLetras[caractere -
                     'a']++; // Incrementa o contador correspondente à letra
    }
  }

  // Fecha o arquivo
  fclose(arquivo);

  // Exibe a frequência de cada letra na tela
  printf("Frequência de cada letra:\n");
  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", 'a' + i, contadorLetras[i]);
  }

  return 0;
}
