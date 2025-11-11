/*Codifique um programa para criar uma variável de tipo anônimo, capaz de 
armazenar o título, o autor, a editora e o ano de publicação de um livro; 
atribuir valores aos seus campos e exibi-los na tela de vídeo.*/

//typedef struct compl complexo; // variavel esta sendo nomeada.

#include <stdio.h>   // Para funções de entrada e saída, como printf
#include <string.h>  // Para funções de manipulação de strings, como strcpy

int main() {

    struct{
    char titulo[100]; //permite 99 caracteres
    char autora[100];
    char editora[100];
    int ano;
    } livro;
    //sem typedef é um tipo anonimo e livro é apenas uma variavel, com typedef livro seria um apelido

    //strcpy esta atribuindo valores aos campos da estrutura
    strcpy(livro.titulo, "Irmao Miguel");
    //copia Irmao Miguel para livro.titulo
    strcpy(livro.autora, "Gabriel HCA");
    strcpy(livro.editora, "Unanimi");
    livro.ano = 1958;
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autora);
    printf("Editora: %s\n", livro.editora);
    printf("Ano da publicacao: %d\n", livro.ano);
    return 0;
}
