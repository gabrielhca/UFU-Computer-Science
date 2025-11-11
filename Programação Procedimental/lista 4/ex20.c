#include <stdio.h>


float notas(float n1, float n2, float n3, char opcao){
    float ma=0, mp, h;
    if(opcao=='a'){
        ma = (n1+n2+n3)/3;
        return ma;
    }
    return 0;
}

int main() {
    char letra;
    float nota1, nota2, nota3, resul=0;
    printf("Digite as tres notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    getchar(); // Limpa o buffer do teclado
    printf("digite a opção a, p ou h:\n");
    letra = getchar();
    resul = notas(nota1,nota2,nota3,letra);
    printf("%.2f", resul);
    return 0;
}

///quebrado
