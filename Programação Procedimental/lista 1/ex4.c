#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, ps, med;
    printf("Digite a primeira nota e em seguida seu peso: \n");
    scanf("%f %f",& n1,& p1);
    printf("Digite a segunda nota e em seguida seu peso: \n");
    scanf("%f %f",& n2,& p2);
    printf("Digite a terceira nota e em seguida seu peso: \n");
    scanf("%f %f",& n3,& p3);
    ps = p1+p2+p3;
    med = (n1+n2+n3)/ps;
    printf("A media ponderada é: %f", med);
    return 0;
}
