#include <stdio.h>

int main() {
    int x, a=0, aux=0, i, vet[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("digite o valor x:\n");
    scanf("%d", &x);
    for (i=0; i <20; i++) {
         if(x == vet[i]) {
            aux = i;
            a = x;
         }
    }
    if (a == x) {
        printf("x esta na posicao: %d", aux);
    } else {
        printf("x no pertence ao vetor");
    }
    return 0;
}
