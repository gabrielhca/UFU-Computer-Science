#include <stdio.h>
#include <math.h>

distp(int x1, int y1, int x2, int y2) {
    float distancia;
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}


int main() {
    int x1, y1, x2, y2;
    printf("Digite o x1, y1, x2, y2 nessa mesma ordem:\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float result = distp(x1, y1, x2, y2);
    printf("A distância entre os pontos é: %f\n", result);
    return 0;
}
