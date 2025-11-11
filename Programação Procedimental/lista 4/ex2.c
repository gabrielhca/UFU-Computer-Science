#include <stdio.h>

float med; //variavel global

void media(float n1, float n2){
    med = (n1+n2)/2;
}

int main() {
    float n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%f %f", &n1, &n2);
    media(n1,n2);
    printf("Media: %.1f", med);
    return 0;
}
