#include <stdio.h>

int main(){
    int a[5]={0,1,2,5,4}, i, *p=a;
    for(i=0;i<5;i++){
        //todas as formas são validas
        printf("%d\n", p[i]);
        //printf("%d\n", *(a + i));
        //printf("%d\n", *(p + i));
    }
    return 0;
}

//valor estatico esta associado a tempo de compilação / alocação de estado de memoria
//array dimanico a memoria para guarda um valor so vai ser conhecida em tempo de execução
//fazendo alocação dinamica de memoria