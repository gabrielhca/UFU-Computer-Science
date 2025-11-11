/*
Codifique, compile e execute um programa na linguagem C que leia os elementos de uma matriz
inteira 5x5 e imprima apenas os elementos da diagonal principal
*/

#include <stdio.h>

int main() {
    int matriz[5][5], matrizAux[5];
    int i, j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o %d° numero da %d° linha:\n", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Numeros da diagonal:\n");
    for(i=0;i<5;i++){
        printf("%d\n", matriz[i][i]);
    }
    return 0;
}