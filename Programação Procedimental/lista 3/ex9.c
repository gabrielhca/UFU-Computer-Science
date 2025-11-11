/*
MA é a média aritmética,
n é o número total de elementos,
n∑i=1 xi é a somatória de todos os valores xi, onde i varia de 1 até n.
Essa fórmula basicamente calcula a média dos valores somando todos eles e dividindo pela quantidade total n.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, ma, cont, acm;
    printf("Digite um numero (digite 0 para terminar): \n");
    scanf("%f", &n);
    acm = 0;
    cont = 0;
    while(n != 0) {
        acm += n;
        cont++;
        printf("Digite um numero (digite 0 para terminar): \n");
        scanf("%f", &n);
    }
    if (cont > 0) {
        ma = acm/cont;
        printf("O resultado de media é: %.2f", ma);
    } else {
        printf("nenhum numero valido foi digitado");
    }

    return 0;
}
-
