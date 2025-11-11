/* metodo da bolha - algoritmo de ordenação

depois da primeira repetição o ultimo elemento é o maior
então podemos repetir por n-1 */

#include <stdio.h>

int main() {
     int n, i, j, aux;
     printf("Quantos elementos? \n");
     scanf("%d", &n);
     int bolha[n];
     for(i=0; i<n ; i++) {
         printf("Digite numero fora da ordem crescente: \n");
         scanf("%d", &bolha[i]);
         while(bolha[i-1] < bolha[i]) {
         printf("Este numero é sequencia do anterior, digite novamente: \n");
         scanf("%d", &bolha[i]);
         }
     }
     printf("Ordem digitada: ");
     for(i=0; i<n ; i++) {
         printf(" - %d - ", bolha[i]);
     }
     for(i=0; i<n; i++){
         for(j=0; j<n-1; j++) {
             if (bolha[j] > bolha[j+1]){
                 aux = bolha[j];
                 bolha[j] = bolha[j+1];
                 bolha[j+1] = aux;
             }
         }
     }
     printf("Ordem crescente: ");
     for(i=0; i<n ; i++) {
         printf("\n - %d - ", bolha[i]);
     }
     return 0;
}
