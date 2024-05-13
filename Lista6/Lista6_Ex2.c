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
    //Indexado//
    HORARIO horario1;
    horario1.segundo = 51;
    horario1.minuto = 33;
    horario1.hora = 14;

    DATA data1;
    data1.dia = 22;
    data1.mes = 1;
    data1.ano = 2009;

    COMPROMISSO compromisso1;
    strcpy(compromisso1.descricao, "Punhetaço");
    compromisso1.urgencia = extrema;
    compromisso1.horario = horario1;
    compromisso1.data = data1;

    printf("Hora: %d\nMinuto: %d\nSegundo: %d\n", horario1.hora, horario1.minuto, horario1.segundo);
    printf("Dia: %d\nMês: %d\nAno: %d\n", data1.dia, data1.mes, data1.ano);
    printf("Compromisso: %s\nUrgência: %d\n", compromisso1.descricao, compromisso1.urgencia);

    return 0;
}
