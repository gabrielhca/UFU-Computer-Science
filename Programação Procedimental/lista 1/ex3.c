#include <stdio.h>

int main() {
    float n1, n2, n3, med;
    printf("Digite o valor de suas tres notas: \n");
    scanf("%f %f %f",& n1,& n2, &n3);
    med = (n1+n2+n3)/3;
    printf("Sua media final e:%f",med);
    return 0;
}
