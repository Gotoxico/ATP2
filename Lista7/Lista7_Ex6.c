//6) Faça um algoritmo que dado um caractere informado pelo usuário possibilite verificar quantas vezes esse caractere aparece em um arquivo texto.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex6.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char caractere;
    char chave;
    int count=0;
    printf("Digite caractere: ");
    scanf("%c", &chave);
    while(!feof(file)){
        fscanf(file, "%c", &caractere);
        if(caractere==chave){
            count++;
        }
    }
    printf("\nQuantidade caractere %c: %d", chave, count);

    return 0;
}