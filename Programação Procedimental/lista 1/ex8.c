#include <stdio.h>

int main() {
    float n, a, i, f;
    printf("Digite o ano do seu nascimento e em seguida o ano atual: \n");
    scanf("%f %f", &n, &a);
    i = a - n;
    f = 2030 - n;
    printf("Sua idade atual e %lf e em 2030 voce tera %lf",i ,f);
    return 0;
}
