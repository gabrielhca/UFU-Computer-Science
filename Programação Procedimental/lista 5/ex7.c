/*
Codifique, compile e execute um programa em C que leia duas matrizes 4 x 4 e escreva uma
terceira com os maiores elementos entre as duas primeiras.
*/

#include <stdio.h>

int main(){
    int matriz1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}, matriz2[4][4] = {5,1,8,3,15,78,3,5,9,0,15,3,5,78,3,0}, matriz3[4][4] = {0};
    int i, j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
            printf("%d° coluna da %d° linha da matiz 3: %d\n", j+1,i+1,matriz3[i][j]);
        }
    }
    return 0;
}