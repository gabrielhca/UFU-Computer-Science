/*
7. Considere a seguinte estrutura:  
Faça um programa que leia informações de 2 alunos em variáveis diferentes e 
utilizando  alocação  dinâmica.  Em  seguida  imprima  as  informações  lidas  em 
ordem alfabética dos nomes dos alunos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno aluno; 
struct aluno {
    char nome[30];
    float media;
    int faltas;
};

int main() {
    aluno *aluno1, *aluno2;
    //(aluno *) conversão do tipo
    //malloc aloca um bloco de memoria e retorna um ponteiro para o inicio desse bloco
    //sizeof(aluno) calcula o tamanho em bytes que a estrutura ocupa na memoria
    //malloc(sizeof(aluno)) então aloca o espaço correto para um objeto do tipo aluno 
    //e retorna um ponteiro para essa área da memória.
    aluno1 =(aluno *)malloc(sizeof(aluno));
    aluno2 =(aluno *)malloc(sizeof(aluno));

    printf("nome: ");
    fgets(aluno1->nome, sizeof(aluno1->nome), stdin);
    printf("Media: ");
    scanf("%f", &aluno1->media);
    printf("Faltas: ");
    scanf("%d", &aluno1->faltas);

    while (getchar() != '\n');

    printf("nome: ");
    fgets(aluno2->nome, sizeof(aluno2->nome), stdin);
    printf("Media: ");
    scanf("%f", &aluno2->media);
    printf("Faltas: ");
    scanf("%d", &aluno2->faltas);

    /*
    Um valor menor que zero (< 0) se a primeira string é "menor" que a segunda em ordem lexicográfica (alfabética).
    Zero (== 0) se as duas strings são iguais.
    Um valor maior que zero (> 0) se a primeira string é "maior" que a segunda
    */
    printf("\nInformações dos alunos em ordem alfabética:\n");
    if (strcmp(aluno1->nome, aluno2->nome) < 0) {
        printf("Nome: %s, Media: %.2f, Faltas: %d\n", aluno1->nome, aluno1->media, aluno1->faltas);
        printf("Nome: %s, Media: %.2f, Faltas: %d\n", aluno2->nome, aluno2->media, aluno2->faltas);
    } else {
        printf("Nome: %s, Media: %.2f, Faltas: %d\n", aluno2->nome, aluno2->media, aluno2->faltas);
        printf("Nome: %s, Media: %.2f, Faltas: %d\n", aluno1->nome, aluno1->media, aluno1->faltas);
    }

    free(aluno1);
    free(aluno2);
    
    return 0;
}