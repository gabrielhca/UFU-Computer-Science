#include <stdio.h>

int main() {
    int hora, min;
    do{
        printf("Digite as horas no intervalo de [0 a 23]: \n");
        scanf("%d", &hora);
    }while(hora <0 || hora >23);
    do{
        printf("Digite os minutos no intervalo de [0 a 59]: \n");
        scanf("%d", &min);
    }while(min <0 || min > 59);
    printf("As horas digitadas foram: %dhrs:%dmin", hora, min);
    return 0;
}
