//11) Faça um algoritmo que dado um arquivo texto com o salário de funcionários, leia o arquivo e armazene os salários em um vetor, em seguida utilizando o vetor atualize os salários em 5%, por fim, armazene novamente os salários atualizados no arquivo texto.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex11.txt", "r");

    if(file == NULL){
        printf("Arquivo nao aberto!");
    }

    char linha[1000];

    int count=0;

    while(fgets(linha, 1000, file)!=NULL){
        count++;
    }

    rewind(file);

    int vetor[count];

    for(int i=0; i<count; i++){
        fgets(linha, sizeof(linha), file);
        int salary = atoi(linha);
        vetor[i]=salary;
    }

    fclose(file);

    for(int b=0; b<count; b++){
        vetor[b]=(int)(vetor[b] * 1.05);
    }

    file = fopen("Lista7_Ex11.txt", "w");

    if(file == NULL){
        printf("Arquivo nao aberto!");
    }

    for(int i=0; i<count; i++){
        fprintf(file, "%d\n", vetor[i]);
    }

    fclose(file);

    return 0;
}