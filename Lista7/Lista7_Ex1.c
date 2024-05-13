//1) Contar o número de linhas de um arquivo//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex1.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char string[100];
    int count=0;

    while(fgets(string, 100, file) != NULL){
        count++;
    }

    printf("Linhas: %d", count);
    return 0;
}