#include <stdio.h>

/*
//chamada normal função
int soma(int n){
    int i, s=0;
    for(i=1;i<=n;i++){
        s += i;
    }
    return s;
}
*/

//chamada recursiva podemos rescrever a função como:
int soma(int n){
    //pergunta: if se comporta como um loop?
    //caso base n=1 -> soma=1
    if(n == 1) {
        return n;
    } else {
        return (soma(n-1)+n);
    }
}

int main() {
    int num;
    printf("digte um numero: \n");
    scanf("%d", &num);
    printf("a soma é: %d", soma(num));
    printf("\n\n\n");
    return 0;
}