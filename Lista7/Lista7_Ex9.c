//9) Faça um algoritmo que verifique quantos paragrafo existem um arquivo texto. Seu algoritmo deve armazenar cada paragrafo em um vetor de string. Mostre todos os parágrafos do arquivo e apresente para cada um deles o comprimento do parágrafo, ou seja, a quantidade de caracteres que ele possui. Considere parágrafo uma frase que finaliza com ponto final. Observação podem existir mais de um parágrafo em uma mesma linha.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct paragrafos{
    char paragrafo[1000];
}PARAGRAFO;

int main(){
    FILE *file;
    file = fopen("Lista7_Ex9.txt", "r");

    char linha[1000];

    int count=0;

    while(fgets(linha, 1000, file) != NULL){
        int i=0;
        while(linha[i]!='\n'){
            while(linha[i]!='.'){
                i++;
            }
            printf("\n");
            count++;
            i++;
        }
    }

    rewind(file);

    PARAGRAFO *paragrafos = (PARAGRAFO *)malloc(count * sizeof(PARAGRAFO));

    int a=0;

    while(fgets(linha, 1000, file) != NULL){
        int i=0;
        while(linha[i]!='\n'){
            int inicio = i;
            while(linha[i]!='.'){
                i++;
            }
            if(linha[i]=='.'){
                i++;
                strncpy(paragrafos[a].paragrafo, linha+inicio, i-inicio);
                a++;
            }
        }
    }

    printf("Quantidade paragrafos: %d", count);

    for(int a=0; a<count; a++){
        printf("\nParagrafo %d: %s", a+1, paragrafos[a].paragrafo);
        printf("\n%d", strlen(paragrafos[a].paragrafo));
    }

    fclose(file);

}