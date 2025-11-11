/* Usando uma união etiquetada, defina um tipo de dados polimórfico para 
representar figuras geométricas, como retângulos e círculos, e crie  uma 
função para calcular a área de uma figura. */

#include <stdio.h>
#include <string.h>


typedef struct{
    float largura;
    float comprimento;
} retangulo;

typedef struct{
    float raio;
} circulo;

typedef struct{
    float lado;
} quadrado;

typedef union{
    quadrado q;
    retangulo r;
    circulo c;
} figuraGeometrica;

typedef struct{
    int rotulo;
     // identifica qual tipo de figura esta armazenada na uniao figuraGeometrica
     // a uniao pode armazenar apenas um dos tipos por vez, o rotulo mostra o tipo atual
    figuraGeometrica fig;
    // contem a uniao que armazena a figura geometrica especifica
} figura; // combina o rotulo e a uniao, permitindo saber qual tipo de figura esta sendo armazenada

//definindo constantes para facilitar a compração
#define RETANGULO 1
#define QUADRADO 2
#define CIRCULO 3

float area(figura f) {
    //figura f pq minha struct figura vai receber um valor f;
    //switch não recebe string, apenas char e valores numericos
    //assim foi nescessario #define para atribuir valores 
    switch(f.rotulo) {
        // f.rotulo pq estou conversando com o valor f que pertence a rotulo;
        case RETANGULO: 
            return f.fig.r.largura * f.fig.r.comprimento; 
        case QUADRADO: 
            return f.fig.q.lado * f.fig.q.lado; 
        case CIRCULO: 
            return 3.14159 * f.fig.c.raio * f.fig.c.raio; 
        default:
            printf("Invalido\n");
            return 0;
    }
}


int main() {
    float valor, comp, larg, lado, raio;
    char opcao[100];
    figura f1;

    printf("Digite a opção desejada: quadrado, circulo ou retangulo.\n");
    //stdin especifica que a entrada vem do teclado
    //sizeof retorna o tamanho do tipo do dado
    fgets(opcao, sizeof(opcao), stdin);

    //remove o caractere '\n' de 'opcao'
    // atribui \0 ao caracter \n
    opcao[strcspn(opcao, "\n")] = '\0';

    if (strcmp(opcao, "retangulo") == 0) {
        printf("Comprimento:\n");
        scanf("%f", &comp);
        printf("Largura:\n");
        scanf("%f", &larg);
        f1.rotulo = RETANGULO;
        f1.fig.r.largura = larg;
        f1.fig.r.comprimento = comp;
    } else if (strcmp(opcao, "quadrado") == 0) {
        printf("Lado:\n");
        scanf("%f", &lado);
        f1.rotulo = QUADRADO;
        f1.fig.q.lado = lado;
    } else if (strcmp(opcao, "circulo") == 0) {
        printf("Raio:\n");
        scanf("%f", &raio);
        f1.rotulo = CIRCULO;
        f1.fig.c.raio = raio;
    } else {
        printf("Invalido");
        return 0;
    }

    valor = area(f1);
    printf("Área: %.2f\n", valor);
    return 0;
}
