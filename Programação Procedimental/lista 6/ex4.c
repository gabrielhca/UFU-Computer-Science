/*
Codifique, compile e execute um programa em C que leia o nome completo do usuário 
e armazene em um vetor de 50 posições. Em seguida, o sistema deve exibir o tamanho da 
string fornecida. (Não utilize funções prontas da biblioteca string.h).
*/

#include <stdio.h>

int main(){
    char nome[50];
    int i, cont=0;
    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    for(i=0;nome[i] != '\0';i++){
        if(nome[i] != '\n'){ // Ignorar o caractere de nova linha
            cont += 1;
        }
    }
    printf("Numero de letras: %d", cont);
    return 0;
}