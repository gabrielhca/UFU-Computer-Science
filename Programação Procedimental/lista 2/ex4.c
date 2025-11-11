#include <stdio.h>

int main() {
    int numero, par;
    printf("Digite um numero: \n");
    scanf("%f", &numero);
    if(numero % 2 == 0)
        printf("Par!");
    else
            printf("Impar!");
    return 0;
}
