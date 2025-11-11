#include <stdio.h>

//sequencia fibonnacci
int fibonacci(int n){
    if(n == 1) {
        return 0;
    } else if (n == 2){
        return 1;
    } else {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}

int main() {
    int num;
    printf("digte um numero: \n");
    scanf("%d", &num);
    printf("fibonacci é: %d", fibonacci(num));
    printf("\n\n\n");
    return 0;
}