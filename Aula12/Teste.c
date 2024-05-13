#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;

    file = fopen("teste.dat", "wb");

    if(file != NULL){
        printf("Arquivo aberto");
    }
    else{
        printf("Arquivo nao aberto");
    }

    int status = fclose(file);
    if(status == 0){
        printf("Arquivo fechado");
    }
    else{
        printf("Arquivo nao foi fechado");
    }

    return 0;
}