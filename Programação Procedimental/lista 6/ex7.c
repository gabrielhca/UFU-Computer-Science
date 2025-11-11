/*
Reescreva o exercício anterior utilizando a função strcmp().
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[100], palavra2[100];
    int i, valida=0;
    printf("primeira palavra:\n");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("Segunda palavra:\n");
    fgets(palavra2, sizeof(palavra2), stdin);

    if(strcmp(palavra1, palavra2)==0) {
        printf("As palavras sao iguais");
    } else {
        printf("As palavras sao diferentes");
    }
    return 0;
}