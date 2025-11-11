/*
Dada a definição de palíndromo como “frase ou palavra que mantém o mesmo sentido 
quando lida de trás pra frente”, codifique, compile e execute um programa em C que leia 
uma palavra ou frase digitada pelo usuário e informe se a mesma é palíndromo ou não.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[30];
    int cont, i, j;
    printf("Digite uma palavra: ");
    fgets(palavra,sizeof(palavra), stdin);
    // Remover o caractere de nova linha
    palavra[strcspn(palavra, "\n")] = '\0';
    cont = strlen(palavra);
    char palavraOposta[cont+1];
    for(i=0, j = cont -1;j>=0; i++, j--) {
        palavraOposta[i] = palavra[j];
    }
    palavraOposta[cont] = '\0';
    if (strcmp(palavra, palavraOposta)==0) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}