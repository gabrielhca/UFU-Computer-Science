/*
Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos elementos
de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais
principal e secundária são todas iguais.
Codifique, compile e execute um programa em C, que dada uma matriz quadrada 3 x 3 , verificar se A
é um quadrado mágico.
*/

#include <stdio.h>

int main(){
    int matriz[3][3], matrizAux[3] = {0}, matrizAux2[3] = {0};
    int i, j, sDiagonal1=0, sDiagonal2 =0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a %d° coluna da %d° linha: \n", j+1,i+1);
            scanf("%d", &matriz[i][j]);
            matrizAux[i] += matriz[i][j]; //soma linhas
        }
    }

    // soma colunas e diagonais
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizAux2[i] += matriz[j][i]; // soma colunas
        }
        sDiagonal1 += matriz[i][i]; // Soma da diagonal principal
        sDiagonal2 += matriz[i][2 - i]; // Soma da diagonal secundária
        // ultima posicao menos i
    }
    
    if(matrizAux[0] == matrizAux[1] && matrizAux[1] == matrizAux[2] &&
       matrizAux[0] == matrizAux2[0] && matrizAux2[0] == matrizAux2[1] && matrizAux2[1] == matrizAux2[2] &&
       matrizAux[0] == sDiagonal1 && sDiagonal1 == sDiagonal2) {
        printf("E um quadrado magico!\n");
    } else {
        printf("Não e um quadrado magico!\n");
    }
    return 0;
}