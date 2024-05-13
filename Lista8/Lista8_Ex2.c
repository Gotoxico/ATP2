//Faça uma função que considere um arquivo binário em que cada registro consiste em um caractere, encontre a quantidade de caracteres abertura de chaves ?{? e a quantidade de caracteres de fechamento de chaves ?}?. As funções fseek() e ftell() podem ser interessantes para auxiliar nessa implementação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char caractere[1];
}CARACTERE;

void escreverCaractereArquivo(){
    CARACTERE unidade[1];
    for(int i=0; i<1; i++){
        printf("Digite caractere: ");
        fflush(stdin);
        scanf("%c", &unidade[i].caractere);
    }
    
    FILE *file;
    file = fopen("Lista8_Ex2.dat", "ab");

    fwrite(&unidade, sizeof(CARACTERE), 1, file);
    fclose(file);
    
    return;
}

void lerCaracteresArquivo(){
    FILE *file;
    file = fopen("Lista8_Ex2.dat", "rb");
    if(file!=NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeCaracteres = ftell(file)/sizeof(CARACTERE);
        fseek(file, 0, SEEK_SET);

        CARACTERE caracteres[quantidadeCaracteres];
        fread(caracteres, sizeof(CARACTERE), quantidadeCaracteres, file);

        for(int i=0; i<quantidadeCaracteres; i++){
            printf("Caractere %d: %s\n", i+1, caracteres[i].caractere);
        }

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!\n");
    }
    return;
}

void contarCaracteresEspecificos(){
    FILE *file;
    file = fopen("Lista8_Ex2.dat", "rb");
    if(file!=NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeCaracteres = ftell(file)/sizeof(CARACTERE);
        fseek(file, 0, SEEK_SET);

        CARACTERE caracteres[quantidadeCaracteres];
        fread(caracteres, sizeof(CARACTERE), quantidadeCaracteres, file);

        int count=0;

        for(int i=0; i<quantidadeCaracteres; i++){
            if(caracteres[i].caractere == '{' || caracteres[i].caractere == '}'){
                count++;
            }
        }

        printf("Quantidade caracteres { e }: %d\n", count);

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!\n");
    }
    return;
}

int main(){
    int opcao;
    do{
        printf("Menu para manipulacao de arquivo binario\n");
        printf("1 - Escrever caractere\n");
        printf("2 - Ler caracteres\n");
        printf("3 - Verificar quantidade { e }\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                escreverCaractereArquivo();
                break;
            case 2:
                lerCaracteresArquivo();
                break;
            case 3:
                contarCaracteresEspecificos();
                break;
            case 4:
                printf("Saiu!");
                break;
            default:
                printf("Opcao invalida!");
                break;
        }
    }while(opcao!=4);

    return 0;
}