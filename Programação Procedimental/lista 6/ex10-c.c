/*refazer em termos de funcao*/

#include <stdio.h>

void bolha(int v[],int n) {
     int i, j, aux;
     for(i=0; i<n ; i++) {
         printf("Digite numero fora da ordem crescente: \n");
         scanf("%d", &v[i]);
         while(v[i-1] < v[i]) {
         printf("Este numero é sequencia do anterior, digite novamente: \n");
         scanf("%d", &v[i]);
         }
     }
     printf("Ordem digitada: ");
     for(i=0; i<n ; i++) {
         printf(" - %d - ", v[i]);
     }
     for(i=0; i<n; i++){
         for(j=0; j<n-1; j++) {
             if (v[j] > v[j+1]){
                 aux = v[j];
                 v[j] = v[j+1];
                 v[j+1] = aux;
             }
         }
     }
     printf("Ordem crescente: ");
     for(i=0; i<n ; i++) {
         printf("\n - %d - ", v[i]);
     }
}

int main() {
     int elemnt, vetor;
     printf("Quantos elementos? \n");
     scanf("%d", &elemnt);
     vetor = bolha(elemnt, elemnt);
     return 0;
}
