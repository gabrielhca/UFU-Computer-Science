/*
Codifique, compile e execute um programa em C que leia uma matriz 10 x 10 e escreva a
localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j, maior=0, posicaoLin = 0, posicaoCol = 0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("Inf o %d° numero da %d° linha:\n", j+1, i+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posicaoLin = i;
                posicaoCol = j;
            }
        }
    }
    printf("O maior elementos é %d e esta na coluna %d, linha %d", maior, posicaoCol, posicaoLin);
    return 0;
}