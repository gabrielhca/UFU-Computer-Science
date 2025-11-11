#include <stdio.h>

int main() {
    int i;
    float maior, menor, preco, mpago, ma, consumo, acm;
    printf("Digite o preco do Kwh:\n");
    scanf("%f", &preco);
    acm = 0;
    maior = 0;
    menor = 999999;
    for(i=1; i <=15; i++){
        printf("Consumo da %d° casa:\n", i);
        scanf("%f", &consumo);
        acm = acm + consumo;
        if (consumo > maior) {
            maior = consumo;
        }
        if (consumo < menor) {
            menor = consumo;
        }
    }
    mpago = maior * preco;
    ma = acm / 15;
    printf("Maior consumo: %.2f;\nMenor consumo: %.2f;\nConsumo medio: %.2f;\nMaior pagamento de uma residencia: %.2f;", maior, menor, ma, mpago);
    return 0;
}
