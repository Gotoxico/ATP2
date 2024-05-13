//8) Faça um algoritmo que possibilite contar quantas palavras existem em um arquivo texto. Atenção podem existir mais de uma palavra em uma mesma linha do arquivo. Observação: As palavras são separadas por um ou mais espaços ou final de linha.//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex8.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char linha[1000];

    int count=0;

    while(fgets(linha, 1000, file) != NULL){
        char *token = strtok(linha, " ");
        while (token != NULL) {
            count++;
            token = strtok(NULL, " ");
        }
    }

    fclose(file);

    printf("Quantidade de palavras: %d", count);
    return 0;
}