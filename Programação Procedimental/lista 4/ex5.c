#include <stdio.h>

int menor; // variavel global

void numeros(int n1, int n2){
    if (n1<n2) {
    menor = n1;
    } else {
    menor = n2;
    }
}

int main(){
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    numeros(n1,n2);
    printf("O menor numero é: %d", menor);
    return 0;
}
