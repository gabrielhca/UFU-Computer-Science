#include <stdio.h>

int main() {
    int fatorial, n, i;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    fatorial = 1;
    for(i=1;i<=n;i++) {
        fatorial = fatorial * i;
    }
    printf("Fatorial: %d", fatorial);
    return 0;
}
