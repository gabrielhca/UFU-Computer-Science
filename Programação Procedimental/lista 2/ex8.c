#include <stdio.h>

int main() {
    int n1,n2;
    printf("Por favor digitar dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
        printf("Maior numero: %d", n1);
    else
        if (n2 > n1)
        printf("Maior numero: %d", n2);
        else
            printf("Os numeros sao iguais.");
    return 0;
}
