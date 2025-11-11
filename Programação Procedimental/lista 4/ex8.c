#include <stdio.h>

float resul;

void parimpar(int n1) {
    if (n1 % 2 == 0) {
        resul = 1;
    } else {
        resul = 0;
    }
}

int main() {
    int n1;
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    parimpar(n1);
    printf("1 par, 0 impar, voce recebeu: %.0f", resul);
    return 0;
}