/*
6. Codifique, compile e execute um programa em C que receba duas palavras digitadas 
pelo  usuário  e  verifique  se  elas  são  iguais  ou  não.  (Não  utilize  funções  prontas  da 
biblioteca string.h)
*/

#include <stdio.h>

int main() {
    char palavra1[100], palavra2[100];
    int i, valida=0;
    printf("primeira palavra:\n");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("Segunda palavra:\n");
    fgets(palavra2, sizeof(palavra2), stdin);
    for(i=0;palavra1[i] != '\0';i++){
        if(palavra1[i] != palavra2 [i]) {
            valida += 1;
        }
    }
    if(valida == 0) {
        printf("As palavras sao iguais");
    } else {
        printf("As palavras sao diferentes");
    }
    return 0;
}