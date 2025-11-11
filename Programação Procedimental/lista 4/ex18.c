#include <stdio.h>

int validar(int inteiro) {
    do {
        printf("Digite o expoente: \n");
        scanf("%d", &inteiro);
        if(inteiro<=0) {
        printf("Invalido, expoente <= 0.\n");
        }
    } while(inteiro<=0);
    return inteiro;
}

int potencia(int base) {
    int expoente = validar(expoente);
    int i=0, resultado =1;
    for(i=0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}


int main() {
    int a, resul;
    printf("Digite a base:\n");
    scanf("%d", &a);
    resul = potencia(a);
    printf("%d", resul);
    return 0;
}
