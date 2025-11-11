/*
Codifique, compile e execute um programa na linguagem C que leia os elementos de uma
matriz real 4x7. Em seguida some todos os elementos da matriz e imprima o resultado ao final do
programa.
*/

#include <stdio.h>

int main() {
    int matriz[4][7];
    int i,j,soma=0;
    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            printf("Digite o %d° numero da %d° linha:\n", j+1,i+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("o resultado da soma de todos os elementos da matriz é %d: ", soma);
    printf("\n\n");
    return 0;
}