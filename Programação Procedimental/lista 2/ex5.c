#include <stdio.h>

int main() {
    int cod;
    printf("Digite o codigo do produto: \n");
    scanf("%d", &cod);
    switch (cod) {
        case 1: printf("Alimento nao perecivel"); break;
        case 2: printf("Alimento perecivel"); break;
        case 3: printf("Higiene pessoal"); break;
        case 4: printf("Material de Limpeza"); break;
        default: printf("Cod error!")
    }
    return 0;
}
