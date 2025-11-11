#include <stdio.h>

positivo(int ano) {
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return 1;
    } else {
    return 0;
    }
}


int main() {
    int ano;
    printf("Ano:");
    scanf("%d", &ano);
    if (positivo(ano)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
