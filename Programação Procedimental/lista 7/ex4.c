/*
Defina um tipo de estrutura para armazenar os dados de um vôo como, por 
exemplo, os nomes das cidades de origem e destino, datas e horários de 
partida e chegada. Crie uma variável desse tipo e atribua valores aos seus 
membros usando a notação de ponto e, depois, inicialização.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    int horas, minutos, segundos;
} Horario;

typedef struct{
    char cidadeOrigem[100];
    char cidadeDestino[100];
    Data dataPartida;
    Data dataChegada;
    Horario horaPartida;
    Horario horaChegada;
}Voo;

int main() {
    // Criando uma variavel do tipo Voo
    Voo meuVoo;

    // Atribuindo valores para os campos da struct
    strcpy(meuVoo.cidadeOrigem, "Sao Paulo");
    strcpy(meuVoo.cidadeDestino, "Rio de Janeiro");
    meuVoo.dataPartida.dia = 10;
    meuVoo.dataPartida.mes = 10;
    meuVoo.dataPartida.ano = 2020;
    meuVoo.dataChegada.dia = 10;
    meuVoo.dataChegada.mes = 10;
    meuVoo.dataChegada.ano = 2020;
    meuVoo.horaPartida.horas = 10;
    meuVoo.horaPartida.minutos = 10;
    meuVoo.horaPartida.segundos = 10;
    meuVoo.horaChegada.horas = 10;
    meuVoo.horaChegada.minutos =10;
    meuVoo.horaChegada.segundos = 10;

    //imprimindo os valores dos campos da struct

    printf("Cidade origem: %s\n", meuVoo.cidadeOrigem);
    printf("cidade destino: %s\n", meuVoo.cidadeDestino);
    printf("Data partida: %d/%d/%d\n", meuVoo.dataPartida.dia, meuVoo.dataPartida.mes, meuVoo.dataPartida.ano);
    printf("Data chegada: %d/%d/%d\n", meuVoo.dataChegada.dia, meuVoo.dataChegada.mes, meuVoo.dataChegada.ano);
    printf("Hora partida: %d:%d:%d\n", meuVoo.horaPartida.horas, meuVoo.horaPartida.minutos, meuVoo.horaPartida.segundos);
    printf("Hora chegada: %d:%d:%d\n", meuVoo.horaChegada.horas, meuVoo.horaChegada.minutos, meuVoo.horaChegada.segundos);

    //Iniciando a variavel diretamente
    Voo outroVoo = {"Maceio", "Para", {1, 1, 2001}, {1, 1, 2001}, {13, 13, 13}, {13, 13, 13}};

    printf("Cidade origem: %s\n", meuVoo.cidadeOrigem);
    printf("cidade destino: %s\n", meuVoo.cidadeDestino);
    printf("Data partida: %d/%d/%d\n", meuVoo.dataPartida.dia, meuVoo.dataPartida.mes, meuVoo.dataPartida.ano);
    printf("Data chegada: %d/%d/%d\n", meuVoo.dataChegada.dia, meuVoo.dataChegada.mes, meuVoo.dataChegada.ano);
    printf("Hora partida: %d:%d:%d\n", meuVoo.horaPartida.horas, meuVoo.horaPartida.minutos, meuVoo.horaPartida.segundos);
    printf("Hora chegada: %d:%d:%d\n", meuVoo.horaChegada.horas, meuVoo.horaChegada.minutos, meuVoo.horaChegada.segundos);

    return 0;
}