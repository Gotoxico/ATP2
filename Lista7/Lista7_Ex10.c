//10) Faça um algoritmo que dado um arquivo texto que representa compras de um cliente contendo o nome e o preço de diversos produtos possibilite calcular o total da compra. Atenção em cada linha é descrito um produto com nome e valor, o nome é separado do valor pelo caractere ‘;’. Exemplo: Bala 7 belos;7,99//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex10.txt", "r");

    if(file == NULL){
        printf("Arquivo nao aberto!");
    }

    char linha[1000], valor[100];

    float soma=0;

    while(fgets(linha, 1000, file)!=NULL){
        int i=0;
        while(linha[i]!=';'){
            i++;
        }
        if(linha[i]==';'){
            i++;
            int j=0;
            while(linha[i]!='\0'){
                valor[j]=linha[i];
                j++;
                i++;
            }
            valor[j]='\0';
            float value = atof(valor);
            soma=soma+value;}
    }

    printf("Soma: %f", soma);
    
    fclose(file);
    return 0;
}