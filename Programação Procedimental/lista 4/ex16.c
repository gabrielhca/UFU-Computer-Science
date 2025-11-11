#include <stdio.h>

absoluto(int n) {
     if(n<0){
         n = n * (-1);
     }
     return n;
}

int main() {
    int a, b, c, d, e, f;
    printf("5 numeros: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Absoluto: \n%d \n%d \n%d \n%d \n%d", absoluto(a), absoluto(b), absoluto(c), absoluto(d), absoluto(e), absoluto(f));
    return 0;
}
