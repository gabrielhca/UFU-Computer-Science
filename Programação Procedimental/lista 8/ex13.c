#include <stdio.h>
#include <string.h>

#define N 2

typedef struct {
    char nome[30];
    float media;
    int faltas;
    char situacao;
} aluno;

float calculoMedia(float n1, float n2) {
    return (n1+n2)/2;
}

int main() {
    aluno alunos[N];
    float n1, n2;
    int i;
    for(i = 0; i<N; i++){
        printf("nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        // Remoção do '\n' de forma concisa
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Primeira nota:\n");
        scanf("%f", &n1);
        printf("Segunda nota:\n");
        scanf("%f", &n2);
        alunos[i].media = calculoMedia(n1,n2);
        printf("Numero de faltas:\n");
        scanf("%d", &alunos[i].faltas);
        getchar();
        if(alunos[i].media < 6 || alunos[i].faltas > 10) {
            alunos[i].situacao = 'R';
        } else {
            alunos[i].situacao = 'A';
        }
    }
    for(i=0;i<N; i++) {
        if(alunos[i].situacao == 'A') {
            printf("\n%s esta APROVADO", alunos[i].nome);
        } else {
            printf("\n%s esta REPROVADO", alunos[i].nome);
        }
    }
    return 0;
}