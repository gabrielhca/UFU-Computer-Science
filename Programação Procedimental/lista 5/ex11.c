#include <stdio.h>

int main(){
    int n, i, acm = 0;
    printf("numero de elementos dos vetores: \n");
    scanf("%d", &n);
    int vetx[n], vety[n];
    for(i = 0; i < n; i++) {
        printf("inf x:\n");
        scanf("%d", &vetx[i]);
        printf("inf y:\n");
        scanf("%d", &vety[i]);
        acm += vetx[i] * vety[i];
    }
    printf("produto escalar dos vetores xy = %d\n", acm);
    return 0;
}