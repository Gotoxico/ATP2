#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //char frase[200], frase1[200];
    //int tamanho;
    //FILE *file;

    //file = fopen("texto.txt", "w");

    //if(file != NULL){
    //    printf("O arquivo foi aberto!");
    //}
    //else{
    //    printf("\nO arquivo nao foi aberto!");
    //}

    //printf("\nDigite uma frase: ");
    //gets(frase);

    //fprintf(file, "%s", "Hello World!");
    //fprintf(file, "%s", "\n");
    //fprintf(file, "%s", frase);

    //fputc('i', file);
    //fputc('k', file);
    //fputc('k', file);

    //printf("\nDigite frase: ");
    //gets(frase1);
    //for(int i=0; i<strlen(frase1); i++){
    //    fputc(frase1[i], file);
    //}

    //fputs("Bananas e macas\n", file);

    //char frase2[200];

    //printf("Digite frase: ");
    //gets(frase2);

    //int verif = fputs(frase2, file);
    //if(verif == EOF){
    //    printf("Erro na escrita dos dados...\n");
    //}
    //else{
    //    printf("Dados escritos com sucesso!\n");
    //}

    char caractere;
    FILE *file;
    file = fopen("nomes.txt", "r");

    //if(file == NULL){
    //    printf("O arquivo nao foi aberto!");
    //    return(1);
    //}

    //while(!feof(file)){
    //    fscanf(file, "%c", &caractere);
    //    printf("%c", caractere);
    //}
    char string[100];
    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    while(fgets(string, 100, file) != NULL){
        printf("%s", string);
    }


    //int status = fclose(file);
    //if(status==0){
    //    printf("\nArquivo fechado com sucesso!");
    //}
    //else{
    //    printf("\nNao foi possivel fechar o arquivo!");
    //}



}