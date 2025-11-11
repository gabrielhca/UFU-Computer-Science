/*
Codifique, compile e execute um programa em C que declare uma matriz 5 x 5. Preencha com 1
a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
*/

#include <stdio.h>

int main() {
    int matriz[5][5] = {0};
    int i, j;
    for(i=0;i<5;i++){
        matriz[i][i] = 1;
        for(j=0;j<5;j++){
            printf("%d° coluna da %d° linha: %d\n", j+1,i+1, matriz[i][j]);
        }
    }
    return 0;
}