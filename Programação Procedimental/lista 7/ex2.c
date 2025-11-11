#include <stdio.h>   // Para funções de entrada e saída, como printf
#include <string.h>  // Para funções de manipulação de strings, como strcpy

//complexos tem uma parte real e uma parte imaginaria.
typedef struct{
    float real; // recebe n1 = 1 e n2 = 3
    float imagine; // recebe n1 = 2 e n2 = 4
} complexo;

void soma(complexo *n1, complexo *n2, complexo *n3){
    complexo s;
    s.real = n1->real + n2->real;
    // soma de 1 e 3
    s.imagine = n1->imagine + n2->imagine;
    // soma de 2 e 4
    *n3=s;
}

int main() {
    complexo num1 = {1, 2}, num2 = {3, 4}, num3;
    soma(&num1,&num2,&num3);
    printf("Soma: %.2f + %.2fi", num3.real, num3.imagine);
    return 0;
}
