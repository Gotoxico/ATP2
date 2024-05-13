//3) Criar uma copia de um arquivo em outro, ou seja, duplicar um arquivo, copiando caractere a caractere.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;
    FILE *file1;
    file = fopen("Lista7_Ex2.txt", "r");
    file1 = fopen("Lista7_Ex3.txt", "w");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char caractere;

    while(!feof(file)){
        fscanf(file, "%c", &caractere);
        fputc(caractere, file1);
    }

    fclose(file);
    fclose(file1);
}