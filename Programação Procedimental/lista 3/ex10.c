#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, cont, resultado;
    printf("Digite um valor x e depois digite um valor y: \n");
    scanf("%d %d", &x, &y);
    cont = 1;
    resultado = 1;
    while(cont <= y) {
        resultado = resultado * x;
        cont++;
    }
    printf("exponeciacao de XY é: %d", resultado);
    return 0;
}
