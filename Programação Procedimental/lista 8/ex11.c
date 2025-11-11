/*
Exercício
Faça um programa que leia um
vetor de n inteiros e imprima sua média.
Agora, o vetor deverá ser alocado
dinamicamente para qualquer quantidade
inteira n que o usuário informar (com n > 0
e n < 50).
*/

#include <stdio.h>
#include <stdlib.h>
/*
Funções da stdlib.h para alocação dinâmica
de memória: malloc, calloc, realloc e
free.
*/

/*
malloc - aloca memoria
void *malloc(int tamanho_em_bytes);
void * significa que o retorno é um endereço de
memória genérico, não importanto o tipo de dado.
*/

/*
calloc - aloca a memoria e zera o conteudo alocado
void *calloc(int num_elem, int tamanho_elem);
num_elem é o numero de elemestos que sera criados
tamanho_elem é o tamanho de cada elemento que sera criado
// Aloca memória para 3 estruturas do tipo Aluno e inicializa com zeros
    Aluno *alunos = (Aluno *)calloc(quantidade_inicial, sizeof(Aluno));
*/

/* realloc - realoca a memoria para mais ou para menos
void *realloc((void *)apontador, int novo_tam);
apontador é a variavel ponteiro que sera alterada. (void *) é obrigatorio
novo_tam é o novo tamanho alocado em bytes.
// Realoca memória para 5 estruturas do tipo Aluno
    alunos = (Aluno *)realloc(alunos, nova_quantidade * sizeof(Aluno));
*/

/*
free - libera a memoria alocada
void free(voide * apontador);
apontador é a variavel ponteiro que contem o endereço para ser liberado
*/ 

int main(){
    int i,soma;
    int n;
    int *vet;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);
    vet=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("entre com vet[%d]:",i);
        scanf("%d",&vet[i]);
        // scanf("%d",(vet+i)); //forma alternativa
    }
    soma=0;
    for(i=0;i<n;i++){
        soma=soma+vet[i];
        // soma=soma+ *(vet+i); //forma alternativa
    }
    printf("media: %d",soma/n);
    // free libera a memoria alocada
    //muito importante liberar a memoria
    free(vet);
    return 0;
}