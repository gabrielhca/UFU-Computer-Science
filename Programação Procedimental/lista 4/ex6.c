#include <stdio.h>


void numeros(int n1, int n2, int *menor){
    if (n1<n2) {
    *menor = n1;
    } else {
    *menor = n2;
    }
}

int main(){
    int n1, n2, m;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    numeros(n1,n2,&m);
    printf("O menor numero é: %d", m);
    return 0;
}
