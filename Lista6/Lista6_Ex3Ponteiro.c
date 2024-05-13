//3) Implemente um algoritmo que registre carros utilizando Struct, Enum e Typedef, para isso utilize as seguintes descrições: a. Data: dia, mês e ano. b. Montadora: Nome e Site c. Carro: Nome, Categoria (SUV, Sedan, Hatch, Esportivo e Picapes), Data de fabricação, Montadora.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}DATA;

typedef char string200[200];

typedef struct montadora{
    string200 nome;
    string200 site;
}MONTADORA;

typedef enum categoria{
    SUV, Sedan, Hatch, Esportivo, Picape
}CATEGORIA;

typedef struct carro{
    string200 nome;
    CATEGORIA categoria;
    DATA data;
    MONTADORA montadora;
}CARRO;

int main(){

    //Ponteiro//
    DATA data1;
    DATA *ptd = &data1;
    ptd->dia = 1;
    ptd->mes = 1;
    ptd->ano = 2000;

    MONTADORA montadora1;
    MONTADORA *ptD = &montadora1;
    strcpy(ptD->nome, "Volkswagen");
    strcpy(ptD->site, "https://www.volskwagen.com.br");

    CARRO carro1;
    CARRO *PTD = &carro1;
    strcpy(PTD->nome, "Nivus");
    PTD->categoria = SUV;
    PTD->data = data1;
    PTD->montadora = montadora1;

    printf("\nData: %d/%d/%d\n", ptd->dia, ptd->mes, ptd->ano);
    printf("Nome montadora: %s\nSite montadora: %s\n", ptD->nome, ptD->site);
    printf("Nome carro: %s\nCategoria carro: %d\n", PTD->nome, PTD->categoria);

    return 0;
}