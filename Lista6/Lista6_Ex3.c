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
    //Indexado//
    DATA data1;
    data1.dia = 1;
    data1.mes = 1;
    data1.ano = 2000;

    MONTADORA montadora1;
    strcpy(montadora1.nome, "Volkswagen");
    strcpy(montadora1.site, "https://www.volskwagen.com.br");

    CARRO carro1;
    strcpy(carro1.nome, "Nivus");
    carro1.categoria = SUV;
    carro1.data = data1;
    carro1.montadora = montadora1;

    printf("Data: %d/%d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("Nome montadora: %s\nSite montadora: %s\n", montadora1.nome, montadora1.site);
    printf("Nome carro: %s\nCategoria carro: %d\n", carro1.nome, carro1.categoria);

    return 0;
}