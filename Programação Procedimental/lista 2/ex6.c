#include <stdio.h>

int main() {
    int sexo, idade, tempo;
    printf("Informe seu sexo m(1) ou f(2): \n");
    scanf("%d", &sexo);
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    printf("Quantos anos de contribuicao? \n");
    scanf("%d", &tempo);
    if (sexo == 1 && tempo >= 35 || sexo == 1 && idade >= 65, sexo == 2 && tempo >= 30 || sexo == 2 && idade >= 60)
        printf("Fique feliz, voce pode se aposetar!");
    else
        printf("voce nao pode se aposetar!");
}
