/*
Codifique, compile e execute um programa na linguagem C que leia os elementos de uma matriz
real 4x7. Em seguida some todos os elementos de cada linha da matriz e imprima o resultado ao
final do programa (uma soma por linha).
*/

#include <stdio.h>

int main() {
    int matriz[4][7];
    int i,j,soma[4] = {0};
    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            printf("Digite o %d° numero da %d° linha:\n", j+1,i+1);
            scanf("%d", &matriz[i][j]);
            soma[i] += matriz[i][j];
        }
    }
    for(i=0;i<4;i++){
        printf("o resultado da soma da %d° linha é %d: \n", i+1, soma[i]);
    }
    printf("\n\n");
    return 0;
}