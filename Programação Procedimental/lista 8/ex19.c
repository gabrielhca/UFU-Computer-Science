/*
Faça  um  programa  que  leia  as  dimensões  de  uma  matriz  e  aloque dinamicamente memória para esta variável. Em seguida leia a matriz e imprima sua diagonal superior.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz, linha, coluna, i, j;
    printf("Quantos linhas e quantas colunas?\n");
    scanf("%d %d", &linha, &coluna);

    /*
    A declaração int **matriz; indica que matriz é um ponteiro para um ponteiro de int.
    Como vamos criar uma matriz dinâmica (ou seja, uma matriz onde o número de linhas e colunas pode variar conforme a entrada), 
    precisamos de um ponteiro para ponteiro para gerenciar as linhas e as colunas dinamicamente.
    */

    // Alocação de memória para as linhas
    matriz = (int **)malloc(linha * sizeof(int *));
    for (i = 0; i < linha; i++) {
        // Alocação de memória para as colunas de cada linha
        matriz[i] = (int *)malloc(coluna * sizeof(int));
    }
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++){
            printf("digite o elemento da linha %d coluna %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    // Impressão da diagonal superior da matriz:
    printf("Diagonal superior da matriz:\n");
        for (i = 0; i < linha; i++) {
            for (j = 0; j < coluna; j++) {
            // Imprime somente se j >= i, ou seja, para a parte triangular superior
            if (j >= i) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  "); // Espaço vazio para manter o alinhamento
            }
        }
        printf("\n");
    }

    for (i = 0; i < linha; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
