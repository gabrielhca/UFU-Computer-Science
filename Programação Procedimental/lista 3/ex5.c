#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, control, imp, resul;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    control = 1;
    imp = 1;
    resul = 0;
    while(control <= n) {
        resul = resul + imp;
        imp = imp + 2;
        control++;
    }
    printf("A soma dos %d impares é: %d", n, resul);
    return 0;
}
