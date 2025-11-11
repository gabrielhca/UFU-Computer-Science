#include <stdio.h>

int main() {
    char gabarito[3], rpt;
    int n, i, j, acm;
    for(i = 0; i <= 2; i++) {
        printf("Inf gabarito (A-E):\n");
        scanf(" %c", &gabarito[i]);
        while(gabarito[i] != 'A' && gabarito[i] != 'B' && gabarito[i] != 'C' && gabarito[i] != 'D' && gabarito[i] != 'E') {
            printf("Informe uma resposta válida (A, B, C, D ou E): ");
            scanf(" %c", &gabarito[i]);
        }
    }
    printf("Numero de alunos:\n");
    scanf("%d", &n);
    int act[n];
    for(i = 0; i < n; i++) {
        act[i] = 0; // Inicializando a pontuação do aluno
        acm = 0; // Reiniciando o acumulador
        printf("Respostas do aluno %d:\n", i + 1);
        for(j = 0; j <= 2; j++) {
            printf("Questão %d: ", j + 1);
            scanf(" %c", &rpt);
            while(rpt != 'A' && rpt != 'B' && rpt != 'C' && rpt != 'D' && rpt != 'E') {
                printf("Apenas A, B, C, D ou E são válidos\nQuestão %d: ", j + 1);
                scanf(" %c", &rpt);
            }
            if(rpt == gabarito[j]) {
                acm++;
            }
        }
        act[i] = acm;
    }

    // Exibindo os resultados
    for(i = 0; i < n; i++) {
        printf("Aluno %d acertou %d questões\n", i + 1, act[i]);
    }

    return 0;
}