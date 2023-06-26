#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    // Cria o arquivo
    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Não foi possível criar o arquivo.\n");
        return 1;
    }

    printf("O arquivo 'arq.txt' foi criado com sucesso.\n");
    printf("Digite os caracteres a serem gravados no arquivo (digite '0' para sair):\n");

    // Loop para gravar os caracteres no arquivo
    while (1) {
        scanf(" %c", &caractere);

        if (caractere == '0')
            break;

        fputc(caractere, arquivo);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Os caracteres foram gravados no arquivo e o arquivo foi fechado com sucesso.\n");

    return 0;
}
