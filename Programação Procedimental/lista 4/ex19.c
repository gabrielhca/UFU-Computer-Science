#include <stdio.h>

int positivo(int n){
    if(n>=0){
        return somaDivisores(n);
    } else {
        printf("%d nao é positivo.", n);
        return 0;
    }
}

int somaDivisores(int n) {
    int i, soma=0;
    for(i=1;i<n-1;i++) {
        if(n%i == 0) {
        soma += i;
        }
    }
    return soma;
}

int main() {
    int num, resul;
    printf("Numero inteiro positivo:\n");
    scanf("%d", &num);
    resul = positivo(num);
    printf("A soma dos divisores de %d é %d\n", num, resul);
    return 0;
}
