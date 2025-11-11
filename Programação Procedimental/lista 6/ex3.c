/*
Reescreva novamente o programa da questão 1 para que seja exibido a quantidade de 
vogais e a quantidade de consoantes da palavra “batatinha”.
*/

#include <stdio.h>

int main(){
    char palavra[30] = "batatinha";
    int i, c = 0, v = 0;
    for(i=0;palavra[i];i++){
        if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
            c += 1;
        } else {
            v += 1;;
        }
    }
    printf("Consoantes: %d\nVogais: %d", c, v);
    printf("\n\n");
    return 0;
}
