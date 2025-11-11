#include <stdio.h>

int parimpar(int n1, int *resul){
   if(n1 % 2 == 0) {
    *resul = 1;
   } else {
    *resul = 0;
   }
}

int main(){
    int n1, r;
    printf("Digite um numeros: \n");
    scanf("%d", &n1);
    parimpar(n1, &r);
    printf("1 par, 0 impar, voce recebeu: %d", r);
    return 0;
}
