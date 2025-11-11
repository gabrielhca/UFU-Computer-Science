#include <stdio.h>

int main(){
    int num[7], i, n2=0, n3=0, n5=0;
    for(i=0; i<7; i++) {
        printf("De 0 a 9:\n");
        scanf("%d", &num[i]);
        while (num[i] <0 || num[i] >9) {
        printf("invalido, digite novamente.\nDe 0 a 9:\n");
        scanf("%d", &num[i]);
        }
        if (num[i] == 2){
            n2++;
        }
        if (num[i] == 3){
            n3++;
        }
        if (num[i] == 5){
            n5++;
        }
    }
    printf("2 foi digitado %d vezes\n", n2);
    printf("3 foi digitado %d vezes\n", n3);
    printf("5 foi digitado %d vezes\n", n5);
    return 0;
}
