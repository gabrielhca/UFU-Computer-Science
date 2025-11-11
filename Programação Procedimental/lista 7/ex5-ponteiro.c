#include <stdio.h>
#include <string.h>

typedef struct {
    int lado;
    int altura;
}retangulo;

typedef struct {
    int raio;
} circulo;

typedef union {
    retangulo q;
    circulo c;
}TIPO;

typedef enum {
    QUADRADO,
    RETANGULO
}tipinho;

Area(TIPO *fig, int *area, tipinho eita);

int main () {
    int area;

    TIPO qual[20], fig;
    tipinho eita;

    printf ("Digite o tipo de objeto (retangulo) || (circulo): ");
    gets (qual);


    if (strcmp(qual, "retangulo") == 0){
        eita = RETANGULO;
        printf ("Altura: ");
        scanf ("%d", &fig.q.altura);
        printf ("\nLado: ");
        scanf ("%d", &fig.q.lado);
        Area(&fig, &area, eita);
        }
    else if (strcmp(qual, "circulo") == 0){
        eita = QUADRADO;
        printf ("Raio: ");
        scanf("%d", &fig.c.raio);
        Area(&fig, &area, eita);



    }
    printf("a area eh %d", area);

    return 0;
}

Area(TIPO *fig, int *area, tipinho eita){
    if (eita == 1)
    *area = fig->q.lado * fig->q.altura;
    else
    *area = (fig->c.raio * fig->c.raio) * 3;

}