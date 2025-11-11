/*
Faça um programa que leia um
vetor de n inteiros e imprima sua média.
Faça duas versões do código: uma
usando notação de array e outra usando
notação de ponteiro na leitura e escrita
dos dados.
*/

#include <stdio.h>
#define N 2
int main(){
    int i,soma;
    int vet[N];
    for(i=0;i<N;i++){
        printf("entre com vet[%d]:",i);
        // scanf("%d",&vet[i]);
        scanf("%d",(vet+i)); //forma alternativa
    }
    soma=0;
    for(i=0;i<N;i++){
        // soma+=vet[i];
        soma+= *(vet+i); //forma alternativa
    }
    printf("media: %d",soma/N);
    return 0;
}