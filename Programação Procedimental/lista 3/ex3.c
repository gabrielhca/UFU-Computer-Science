#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    do{
        printf("Escolha uma opcao:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    }while( (i < 1) || (i > 3) );

    system("pause");
    return 0;
}
