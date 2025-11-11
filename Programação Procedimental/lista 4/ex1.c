#include <stdio.h>

float media(float n1, float n2){
    return (n1+n2)/2; // em apenas uma linha
}

int main() {
    float n1, n2;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &n1, &n2);
    printf("Media: %.1f", media(n1,n2));
    return 0;
}
