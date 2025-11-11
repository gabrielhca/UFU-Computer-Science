#include <stdio.h>

//função fatorial
int fat(int n){
    if(n == 0) {
        return 1;
    } else {
        return (fat(n-1)*n);
    }
}

int main() {
    int num;
    printf("digte um numero: \n");
    scanf("%d", &num);
    printf("Fatorial é: %d", fat(num));
    printf("\n\n\n");
    return 0;
}