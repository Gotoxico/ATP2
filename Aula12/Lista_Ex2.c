//2) Implemente um algoritmo que registre compromissos em Struct, Enum e Typdef, para isso utilize as seguintes descrições para desenvolver Structs: a. Horário: hora, minutos e segundos. b. Data: dia, mês e ano. c. Compromisso: Texto descrição do compromisso, Urgência (Baixa, Alta e Extrema), um Horário e uma Data. Armazenando Struct em Arquivo Binário#include <stdio.h>

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

//Armazenar elementos struct em vetor//

void armazenarHorariosVetor(HORARIO horarios[], int n){
    for(int i=0; i<n; i++){
        printf("Hora: ");
        scanf("%d", &horarios[i].hora);
        printf("Minuto: ");
        scanf("%d", &horarios[i].minuto);
        printf("Segundo: ");
        scanf("%d", &horarios[i].segundo);
    }
    return;
}

void armazenarDatasVetor(DATA datas[], int n){
    for(int i=0; i<n; i++){
        printf("Dia: ");
        scanf("%d", &datas[i].dia);
        printf("Mes: ");
        scanf("%d", &datas[i].mes);
        printf("Ano: ");
        scanf("%d", &datas[i].ano);
    }
    return;
}

void armazenarCompromissosVetor(COMPROMISSO compromissos[], int n){
    for(int i=0; i<n; i++){
        printf("Descricao: ");
        fflush(stdin);
        gets(compromissos[i].descricao);
        printf("Urgencia: ");
        scanf("%u", &compromissos[i].urgencia);

        printf("Hora: ");
        scanf("%d", &compromissos[i].horario.hora);
        printf("Minuto: ");
        scanf("%d", &compromissos[i].horario.minuto);
        printf("Segundo: ");
        scanf("%d", &compromissos[i].horario.segundo);

        printf("Dia: ");
        scanf("%d", &compromissos[i].data.dia);
        printf("Mes: ");
        scanf("%d", &compromissos[i].data.mes);
        printf("Ano: ");
        scanf("%d", &compromissos[i].data.ano);
    }
    return;
}

//Imprimir elementos vetor//

void imprimirHorariosVetor(HORARIO horarios[], int n){
    for(int i=0; i<n; i++){
        printf("Hora: %d\n", horarios[i].hora);
        printf("Minuto: %d\n", horarios[i].minuto);
        printf("Segundo: %d\n", horarios[i].segundo);
    }
}

void imprimirDatasVetor(DATA datas[], int n){
    for(int i=0; i<n; i++){
        printf("Dia: %d\n", datas[i].dia);
        printf("Mes: %d\n", datas[i].mes);
        printf("Ano: %d\n", datas[i].ano);
    }
}

void imprimirCompromissosVetor(COMPROMISSO compromissos[], int n){
    for(int i=0; i<n; i++){
        printf("Descricao: %s\n", compromissos[i].descricao);
        printf("Urgencia: %d\n", compromissos[i].urgencia);

        printf("Hora: %d\n", compromissos[i].horario.hora);
        printf("Minuto: %d\n", compromissos[i].horario.minuto);
        printf("Segundo: %d\n", compromissos[i].horario.segundo);

        printf("Dia: %d\n", compromissos[i].data.dia);
        printf("Mes: %d\n", compromissos[i].data.mes);
        printf("Ano: %d\n", compromissos[i].data.ano);
    }
}

//Escrever em arquivo binário//

void escreverHorariosArquivoBinario(HORARIO horarios[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Horario.dat", "wb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(horarios, sizeof(HORARIO), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void escreverDatasArquivoBinario(DATA datas[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Data.dat", "wb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(datas, sizeof(DATA), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void escreverCompromissosArquivoBinario(COMPROMISSO compromissos[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Compromisso.dat", "wb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(compromissos, sizeof(COMPROMISSO), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

//Ler arquivo binário//

void lerHorariosArquivoBinario(HORARIO horarioslidos[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Horario.dat", "rb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fread(horarioslidos, sizeof(HORARIO), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void lerDatasArquivoBinario(DATA dataslidos[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Data.dat", "rb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(dataslidos, sizeof(DATA), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void lerCompromissosArquivoBinario(COMPROMISSO compromissoslidos[], int n){
    FILE *file;
    file = fopen("Lista_Ex2Compromisso.dat", "rb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(compromissoslidos, sizeof(COMPROMISSO), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

int main(){
    int opcao;
    do{
        printf("Digite opcao: \n");
        printf("1-Horarios\n");
        printf("2-Datas\n");
        printf("3-Compromissos\n");
        printf("4-Sair\n");
        scanf("%d", &opcao);

        if(opcao==1){
            int n;
            printf("Digite quantidade: ");
            scanf("%d", &n);

            HORARIO horarios[n];
            armazenarHorariosVetor(horarios, n);
            escreverHorariosArquivoBinario(horarios, n);

            HORARIO horarioslidos[n];
            lerHorariosArquivoBinario(horarioslidos, n);
            imprimirHorariosVetor(horarioslidos, n);
        }

        if(opcao==2){
            int n;
            printf("Digite quantidade: ");
            scanf("%d", &n);

            DATA datas[n];
            armazenarDatasVetor(datas, n);
            escreverDatasArquivoBinario(datas, n);

            DATA dataslidos[n];
            lerDatasArquivoBinario(dataslidos, n);
            imprimirDatasVetor(dataslidos, n);
        }

        if(opcao==3){
            int n;
            printf("Digite quantidade: ");
            scanf("%d", &n);

            COMPROMISSO compromissos[n];
            armazenarCompromissosVetor(compromissos, n);
            escreverCompromissosArquivoBinario(compromissos, n);

            COMPROMISSO compromissoslidos[n];
            lerCompromissosArquivoBinario(compromissoslidos, n);
            imprimirCompromissosVetor(compromissoslidos, n);
        }
    }while(opcao!=4);
    
    return 0;
}
