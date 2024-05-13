//2) Contar o número de caracteres de um arquivo, incluindo os caracteres de mudança de linha, não contar o EOF.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex2.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    int count=0;

    while(!feof(file)){
        if(fgetc(file)!=NULL){
            count++;
        }
    }
    printf("Numero caracteres: %d", count-1);
}