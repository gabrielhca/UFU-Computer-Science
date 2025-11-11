#include <stdio.h>

float capturaNota(){
        float nota;
        do {
            printf("Inf a nota [0 a 10]\n");
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
               printf("Invalido, tente novamente!\n");
               }
        } while (nota < 0 || nota > 10);
        return nota;
}

int main() {
     float nota = capturaNota();
     printf("A nota é: %.1f", nota);
     return 0;
}