#include <stdio.h>
#include <stdlib.h> // para funcionar o exit(1)

int main(){

    FILE *arq;
    char ch;
    if ((arq=fopen("teste.dat","w")) == NULL) {
        printf("Arquivo não pode ser criado\n");
        exit(1);
    }
    do{
        ch=getchar();
        putc(ch,arq);
    }
    while (ch!='0');
    fclose(arq);
    return 0;
}