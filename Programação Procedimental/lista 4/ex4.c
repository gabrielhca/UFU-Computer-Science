#include <stdio.h>

int menor(int n1, int n2){
   if(n1<n2) {
    return n1;
   } else {
       return n2;
   }
}

int main(){
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    printf("O menor e: %d", menor(n1,n2));
    return 0;
}
