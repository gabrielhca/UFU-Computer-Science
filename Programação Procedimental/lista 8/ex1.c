#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char s[50], c;

    /* Lê um nome para o arquivo a ser aberto: */
    printf("Digite o caminho completo, inclusive o nome para o arquivo:\n");
    fgets(s, sizeof(s), stdin);

    // Remove o caractere de nova linha (\n) que fgets captura ao final da entrada
    s[strcspn(s, "\n")] = '\0';

    /* Caso ocorra algum erro na abertura do arquivo, o programa será finalizado */
    if (!(fp = fopen(s, "w"))) {
        printf("Erro! Impossível abrir o arquivo!\n");
        exit(1);
    }

    /* Se não houve erro, escreve no arquivo */
    fprintf(fp, "Este é um arquivo chamado:\n%s\n", s);
    fclose(fp); // Fecha o arquivo após a escrita para garantir que os dados sejam salvos

    /* Abre novamente para a leitura */
    fp = fopen(s, "r");
    if (!fp) { // Verifica se o arquivo foi aberto corretamente
        printf("Erro ao abrir o arquivo para leitura!\n");
        exit(1);
    }

    // Lê e exibe cada caractere do arquivo até o final
    while (fscanf(fp, "%c", &c) == 1) { // fscanf retorna o número de itens lidos, ou seja, 1 para cada caractere válido
        printf("%c", c);
    }

    fclose(fp); // Fecha o arquivo após a leitura
    printf("\n\n");
    return 0;
}
