#include <stdio.h>

int main() {
    int n1, dezena, unidade, centena;
    printf("Digite um numero inteiro positivo de tres digitos: \n");
    scanf("%d", &n1);
    centena = (n1)/100;
    dezena = n1/10 - (centena * 10);
    unidade = n1 - (centena * 100 + dezena * 10);
    printf("O numero invertido é: %d%d%d", unidade, dezena, centena);
    return 0;
}
