#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    float media;
    char situacao;
    int faltas;
} aluno;

float calcular_media(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    aluno alunos[10];
    int i;
    float n1, n2;
    for(i = 0; i < 10; i++) {
        printf("Nome do %d° aluno:\n", i + 1);
        scanf(" %29[^\n]", alunos[i].nome);
        printf("Digite a primeira nota:\n");
        scanf("%f", &n1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &n2);
        printf("Informe o numero de faltas:\n");
        scanf("%d", &alunos[i].faltas);
        alunos[i].media = calcular_media(n1, n2);
        if(alunos[i].media >= 6 && alunos[i].faltas < 10) {
            alunos[i].situacao = 'A';
        } else {
            alunos[i].situacao = 'R';
        }
    }
    for(i = 0; i < 10; i++) {
        printf("Aluno: %s.\nMedia: %.2f.\nFaltas: %d.\n", alunos[i].nome, alunos[i].media, alunos[i].faltas);
        if(alunos[i].situacao == 'A') {
            printf("Aprovado!\n\n\n");
        } else if(alunos[i].situacao == 'R') {
            printf("Reprovado!\n\n\n");
        }
    }
    return 0;
}