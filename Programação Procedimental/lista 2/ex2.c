/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Codifique,
compile e execute um programa que leia quanto cada apostador investiu, o valor
do prêmio, eimprimaquanto cada um ganharia do prêmio com base no valor investido.*/

#include <stdio.h>

int main() {
    float apt1, apt2, apt3, jd1, jd2, jd3, premio, total;
    printf("Informe o valor do premio: \n");
    scanf("%f", &premio);
    printf("Informe os tres valores apostados: \n");
    scanf("%f %f %f", &apt1, &apt2, &apt3);
    //porcentagem = valor apostado/total apostado * premio
    total = apt1+apt2+apt3;
    jd1 = (apt1/total) * premio;
    jd2 = (apt2/total) * premio;
    jd3 = (apt3/total) * premio;
    printf("Quem apostou R$ %f recebe: R$ %f \nQuem apostou R$ %f recebe: R$ %f \nQuem apostou R$ %f recebe: R$ %f", apt1, jd1, apt2, jd2, apt3, jd3);
    return 0;
}
