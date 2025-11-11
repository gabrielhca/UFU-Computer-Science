#include <stdio.h>

int main() {
    float h, m, t;
    printf("Digite as horas: \n");
    scanf("%f",& h);
    printf("Digite os minutos: \n");
    scanf("%f",& m);
    t = (h*60) + m;
    printf("O total convertido minutos e de: %f",t);
    return 0;
}
