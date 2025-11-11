#include <stdio.h>

int main() {
    int vet[10], i, acm=0, menor=9999, maior=0;
    for(i=0; i<10; i++) {
        printf("inf o %d numero:\n", i+1);
        scanf("%d", &vet[i]);
        acm += vet[i];
        if (vet[i] < menor) {
            menor = vet[i];
        }
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    printf("soma = %d\nmenor = %d\nmaior =%d", acm, menor, maior);
}
