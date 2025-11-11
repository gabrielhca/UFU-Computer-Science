/*
Reescreva o programa da questão 1 para que seja impresso apenas as consoantes.
*/

#include <stdio.h>

int main(){
    char palavra[30] = "batatinha", consoante[30] = "";
    int i, j = 0;
    for(i=0;palavra[i];i++){
        if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
            consoante[j++] = palavra[i];
            // j serve para colocar a vogal na posiçao correta, e ele sempre aumenta uma posição
        }
    }
    consoante[j] = '\0'; // Adiciona o caractere nulo ao final da string
    printf("%s", consoante);
    printf("\n\n");
    return 0;
}
