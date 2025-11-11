/*
Faça um programa que leia o tamanho de um vetor de inteiros e reserve 
dinamicamente memória para esse vetor. Em seguida, leia os elementos desse 
vetor, imprima o vetor lido e mostre o resultado da soma dos números ímpares 
presentes no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 4

int main() {
    //criando um ponteiro num que sera transformando em vetor
    //atraves da alocação de memoria
    //em outras palavras estarei reservando
    // uma cadeia n de posições para o ponteiro num
    int *num;
    int soma=0;
    //aqui estou falando que ele vai receber N espaços de tamanhos que caibam no tipo int
    //(int *) serve para converter o tipo retrnado por malloc (conversão de tipo) para int
    //malloc retorna um ponteiro do tipo void *, que é um ponteiro generico
    //N * sizeof(int) é usado porque a intenção é alocar memória para um vetor de inteiros que contém N elementos.
    num = (int *)malloc(N*sizeof(int));
    for(int i=0; i<N;i++) {
        printf("Digite %d° eleme", i+1);
        scanf("%d", (num + i));
        if((num[i])%2 != 0) {
            soma += num[i];
        }
    }
    for(int i=0; i<N;i++) {
        printf("%d ", num[i]);
    }
    printf("\nSoma dos impares: %d", soma);
    //fazendo a liberação da memoria
    free(num);
    return 0;
}