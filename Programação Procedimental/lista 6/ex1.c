/*Codifique,  compile  e  execute  um  programa  na  linguagem  C  que  armazene  todas  as 
letras da palavra “batatinha”. Em seguida, imprima apenas as vogais.
*/

#include <stdio.h>

int main(){
    char palavra[30] = "batatinha", vogais[30] = "";
    int i, j = 0;
    for(i=0;palavra[i];i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais[j++] = palavra[i];
            // j serve para colocar a vogal na posiçao correta, e ele sempre aumenta uma posição
        }
    }
    vogais[j] = '\0'; // Adiciona o caractere nulo ao final da string
    printf("%s", vogais);
    printf("\n\n");
    return 0;
}
