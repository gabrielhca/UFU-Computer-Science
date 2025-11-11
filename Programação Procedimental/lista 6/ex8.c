/*
Codifique,  compile  e  execute  um  programa  em  C  que  realize  três  requisições  ao 
usuário: o primeiro nome, depois o último nome e por fim o nome do meio. Concatene as 
três strings e exiba o resultado final na tela. 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], ultNome[50], meiNome[50];
    printf("Primeiro nome: ");
    fgets(nome,sizeof(nome), stdin);
    printf("Ultimo nome: ");
    fgets(ultNome,sizeof(ultNome),stdin);
    printf("Nome do meio: ");
    fgets(meiNome,sizeof(meiNome),stdin);
    // A string de origem permanecerá inalterada e será anexada ao fim da string de destino
    strcat(nome, " ");
    strcat(nome, meiNome);
    strcat(nome, " ");
    strcat(nome, ultNome);
    printf("Juntando: %s", nome);
    return 0;
}