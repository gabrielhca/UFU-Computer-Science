#include <stdio.h>

//função fatorial solução alternativa
// mais confiavel, porem menos direto e mais trabalhoso
int fat(int n, int prod){
    if(n == 0) {
        return prod;
    } else {
        return (fat((n-1),(prod*n)));
    }
}

int main() {
    int num;
    printf("digte um numero: \n");
    scanf("%d", &num);
    printf("Fatorial é: %d", fat(num, 1));
    printf("\n\n\n");
    return 0;
}