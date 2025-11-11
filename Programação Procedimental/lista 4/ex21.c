#include <stdio.h>

float valorPagamento(float valor, float atraso){
    float multa, pag;
    int i;
    multa = valor * 1.03;
    pag = multa;
    for(i=0; i<atraso; i++){
        pag *= 1.01;
    }
    return pag;
}

int main() {
    float prest, dias, resul;
    printf("Valor da prestacao:\n");
    scanf("%f", &prest);
    printf("Dias de atraso:\n");
    scanf("%f", &dias);
    resul = valorPagamento(prest, dias);
    printf("Valor a ser pago: %.2f", resul);
    return 0;
}
