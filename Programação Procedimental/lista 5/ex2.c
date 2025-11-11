/*
Codifique, compile e execute um programa na linguagem C que:
 Leia os elementos de uma matriz inteira 4x4;
 Imprima na tela a matriz criada;
 Imprima a posição (linha e coluna) dos números pares.
*/

#include <stdio.h>

int main() {
    int matriz[4][4], par[16];
    // 16 total de pares que pode armazerna em 4x4
    int i, j,k=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o %d° numero da %d° linha:\n", j+1,i+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] % 2 == 0) {
                par[k++] = matriz[i][j];
                //k++ pq a posição so deve mudar depois de acrescentar um numero par
            }
        }
    }
    printf("\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Elemento na linha %d, linha %d: [%d]\n", i+1, j+1, matriz[i][j]);
        }
        printf("\n\n");
    }
    printf("Numeros pares na matriz: ");
    for(i=0;i<4;i++){
        printf("%d, ", par[i]);
    }
    printf("\n\n");
    return 0;
}