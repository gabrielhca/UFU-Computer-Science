// Receba dois numeros interios e inverta os valores das variaveis.

#include <stdio.h>

int main() {
    int n1, n2, aux;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    aux = n1;
    n1 = n2;
    n2 = aux;
    printf("teste: %d %d", n1, n2);
    return 0;
}
