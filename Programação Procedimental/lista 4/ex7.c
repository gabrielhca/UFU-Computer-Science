#include <stdio.h>

int parimpar(int n1){
   if(n1 % 2 == 0) {
    return 1;
   } else {
       return 0;
   }
}

int main(){
    int n1;
    printf("Digite um numeros: \n");
    scanf("%d", &n1);
    printf("1 par, 0 impar, voce recebeu: %d", parimpar(n1));
    return 0;
}
