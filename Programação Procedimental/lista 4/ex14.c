#include <stdio.h>

void imprime_espacos(int n_espacos) {
      int i;
      for(i=0;i<n_espacos;i++){
          printf(" ");
      }
      return;
}

void imprime_asteriscos(int n_asteriscos) {
      int i;
      for(i=0;i<n_asteriscos;i++){
          printf("*");
      }
      return;
}

int main() {
     int n, asteriscos, espaco;
     printf("Numero: ");
     scanf("%d", &n);
     imprime_espacos(n);
     imprime_asteriscos(n);
     return 0;
}
