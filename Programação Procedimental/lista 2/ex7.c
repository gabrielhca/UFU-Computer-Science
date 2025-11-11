#include <stdio.h>

int main() {
    int n1, n2, n3, escolha, r;
    printf("favor digite 3 numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Escolha oq deseja fazer: \n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisão\n5 - Sair\n");
    scanf("%d", &escolha);
    switch (escolha) {
        case 1: (r = n1+n2+n3);
                 printf("Resultado = %d", r);
                 break;
        case 2: (r = n1-n2-n3);
                 printf("Resultado = %d", r);
                 break;
        case 3: (r = n1*n2*n3);
                 printf("Resultado = %d", r);
                 break;
        case 4:
            if (n1 && n2 && n3 != 0) {
                r = n1/n2/n3;
                printf("Resultado = %d", r);
            }
            else
                printf("nao existe divisao por zero.");
            break;
        case 5: printf("Programa finalizado"); break;
        default: printf("Não foi isso que pedi!");
    }
    return 0;
}
