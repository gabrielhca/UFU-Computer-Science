/*
5. Reescreva o exercício anterior utilizando a função strlen(). 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    // Remover o caractere de nova linha, se presente
    nome[strcspn(nome, "\n")] = '\0';
    printf("Numero de letras: %zu", strlen(nome));
    return 0;
}