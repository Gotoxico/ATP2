//7) Faça um algoritmo que abra dois arquivos texto diferentes e armazene o conteúdo de ambos os arquivos em um terceiro arquivo (que deve ser criado).//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file1, *file2, *file3;
    file1 = fopen("Lista7_Ex5.txt", "r");
    file2 = fopen("Lista7_Ex6.txt", "r");
    file3 = fopen("Lista7_Ex7.txt", "w");

    if(file1 == NULL || file2 == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char string[1000];

    while(!feof(file1)){
        fgets(string, 1000, file1);
        fputs(string, file3);
    }

    fclose(file3);

    file3 = fopen("Lista7_Ex7.txt", "a");

    fputs("\n", file3);
    fputs("\n", file3);
    while(!feof(file2)){
        fgets(string, 1000, file2);
        fputs(string, file3);
    }

    return 0;
}