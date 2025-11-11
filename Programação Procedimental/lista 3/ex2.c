/* Escreva, usando while, um programa para calcular
a média de N números. O valor de N é dado pelo
usuário. */

#include <stdio.h>

int main() {
    int n, contador, nota;
    float media = 0;
    printf("Deseja calcular a media de quantas notas? \n");
    scanf("%d", &n);
    contador = 0;
    while(contador < n) {
            printf("Digite nota: \n");
            scanf("%d", &nota);
        media = media + nota;
        contador = contador + 1;
    }
    printf("O valor da media é %.2d: ", media/n);
    printf("\nFim do programa");
    return 0;
}
