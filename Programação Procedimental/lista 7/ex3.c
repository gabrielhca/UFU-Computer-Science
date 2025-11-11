/*
Defina um tipo de estrutura para armazenar um horário composto de hora, 
minutos e segundos. Crie e inicialize uma variável desse tipo e, em seguida, 
mostre seu valor no vídeo usando o formato "99:99:99".
 */

#include <stdio.h>
#include <string.h>


typedef struct{
    int horas, minutos, segundos;
}horario;

int main(){
    horario h;
    do{
        printf("Horario:\n");
        scanf("%d", &h.horas);
    } while (h.horas < 0 || h.horas > 23);
    do{
        printf("Minutos: \n");
        scanf("%d", &h.minutos);
    } while (h.minutos < 0 || h.minutos > 59);
    do{
        printf("Segundos: \n");
        scanf("%d", &h.segundos);
    } while (h.segundos < 0 || h.segundos > 59);

    printf("Horario: %d:%d:%d\n", h.horas, h.minutos, h.segundos);   
    return 0;
}
