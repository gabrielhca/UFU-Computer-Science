#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i;
    for(i=0; i<=9; i++) {
        printf("Digite o %d valor do vetor A:\n", i+1);
        scanf("%d", &a[i]);
        printf("Digite o %d valor do vetor B:\n", i+1);
        scanf("%d", &b[i]);
        c[i] = a[i] - b[i];
    }
    for(i=0; i<=9; i++)
        printf("c[%d] = %d\n", i, c[i]);
    return 0;
}
