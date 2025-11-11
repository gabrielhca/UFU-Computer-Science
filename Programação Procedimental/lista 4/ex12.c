#include <stdio.h>

int tipo() {
     int n;
     printf("Digite um numero:\n");
     scanf("%d", &n);
     if (n >= 1) {
         return 1;
     } else if (n == 0) {
         return 0;
     } else {
         return -1;
     }
}

int main() {
     int valor;
     valor = tipo();
     printf("%d", valor);
     return 0;
}
