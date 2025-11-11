#include <stdio.h>

void media(float n1, float n2, float *med){ //float med é o parametro de saida
    *med = (n1+n2)/2;
}

int main() {
    float n1, n2, m;
    printf("Digite dois numeros: \n");
    scanf("%f %f", &n1, &n2);
    media(n1,n2,&m); //m esta associdade a med devido a ordem de declaração
    printf("A média é: %f\n", m);
    return 0;
}