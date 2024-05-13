//2) Implemente um algoritmo que registre compromissos em Struct, Enum e Typdef, para isso utilize as seguintes descrições para desenvolver Structs: a. Horário: hora, minutos e segundos. b. Data: dia, mês e ano. c. Compromisso: Texto descrição do compromisso, Urgência (Baixa, Alta e Extrema), um Horário e uma Data.//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct horario{
    int segundo;
    int minuto;
    int hora;
}HORARIO;

typedef struct data{
    int dia;
    int mes;
    int ano;
}DATA;

typedef enum urgencia{
    baixa, alta, extrema
}URGENCIA;

typedef char string1000[1000];

typedef struct compromisso{
    string1000 descricao;
    URGENCIA urgencia;
    HORARIO horario;
    DATA data;
}COMPROMISSO;

int main(){
    HORARIO horario1;
    DATA data1;
    COMPROMISSO compromisso1;
    
    //Ponteiro//
    HORARIO *ptd = &horario1;
    ptd->segundo = 51;
    ptd->minuto = 33;
    ptd->hora = 14;

    DATA *ptD = &data1;
    ptD->dia = 22;
    ptD->mes = 1;
    ptD->ano = 2009;

    COMPROMISSO *PTD = &compromisso1;
    strcpy(PTD->descricao, "Punhetaço");
    PTD->urgencia = extrema;

    printf("Hora: %d\nMinuto: %d\nSegundo: %d\n", ptd->segundo, ptd->minuto, ptd->segundo);
    printf("Dia: %d\nMês: %d\nAno: %d\n", ptD->dia, ptD->mes, ptD->ano);
    printf("Compromisso: %s\nUrgência: %d\n", PTD->descricao, PTD->urgencia);

    return 0;
}