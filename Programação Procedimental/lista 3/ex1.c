// programa que le 5 numeros e mostra o resultado da soma desses numeros

#include <stdio.h>

int main() {
    float valor, soma;
    int contagem;
    soma = 0;
    contagem = 1;
    while(contagem <=5) {
        printf("\nDigite o %d° numero: ", contagem);
        scanf("%f", &valor);
        soma = soma + valor;
        //acumula a soma a cada passo do loop
        contagem = contagem + 1;
        //controla o numero de execuções
    }
    printf("\nO resultado da soma eh: %2.f", soma);
    return 0;
}
