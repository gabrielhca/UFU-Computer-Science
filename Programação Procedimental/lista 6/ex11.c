/*
11. Existe um método de ordenação denominado de método da seleção (selection sort, 
em inglês).  Este algoritmo é baseado em se passar sempre o menor valor do vetor para a 
primeira posição (ou o maior dependendo da ordem requerida), depois o segundo menor 
valor  para  a  segunda  posição  e  assim  sucessivamente,  até  os  últimos  dois  elementos. 
Neste algoritmo de ordenação é escolhido um número a partir do primeiro, este número 
escolhido  é  comparado  com  os  números  a  partir  da  sua  direita,  quando  encontrado  um 
número menor, o número escolhido ocupa a posição do menor número encontrado. Este 
número encontrado será o próximo número escolhido, caso não for encontrado nenhum 
número  menor  que  este  escolhido,  ele  é  colocado  na  posição  do  primeiro  número 
escolhido, e o próximo número à sua direita vai ser o escolhido para fazer as comparações. 
É repetido esse processo até que a lista esteja ordenada.
*/

#include <stdio.h>

void selecao(int select[], int n) {
    int i, j, min, aux;

    // Laço para cada posição do array
    for (i = 0; i < n - 1; i++) {
        min = i; // Assume que o menor valor está na posição i

        // Encontra o menor valor no restante do array
        for (j = i + 1; j < n; j++) {
            if (select[j] < select[min]) {
                min = j;
            }
        }

        // Troca o menor valor encontrado com o valor na posição i
        if (min != i) {
            aux = select[i];
            select[i] = select[min];
            select[min] = aux;
        }
    }

    // Exibe o array ordenado
    for (i = 0; i < n; i++) {
        printf(" - %d - ", select[i]);
    }
}

int main() {
    int n, i;

    // Pede ao usuário o número de elementos
    printf("Quantos elementos? \n");
    scanf("%d", &n);

    // Declara o array com tamanho n
    int select[n];

    // Lê os elementos do usuário
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: \n", i + 1);
        scanf("%d", &select[i]);
    }

    // Exibe os elementos antes da ordenação
    printf("Ordem digitada: ");
    for (i = 0; i < n; i++) {
        printf(" - %d - ", select[i]);
    }
    printf("\n");

    // Chama a função de ordenação
    selecao(select, n);

    // Exibe os elementos após a ordenação
    printf("\nOrdem crescente: ");
    for (i = 0; i < n; i++) {
        printf(" - %d - ", select[i]);
    }

    return 0;
}
