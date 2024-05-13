//4) Contar o número de vogais em um arquivo.//

#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex4.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char caractere;
    int a=0, e=0, i=0, o=0, u=0;

    while(!feof(file)){
        fscanf(file, "%c", &caractere);
        if(caractere=='a'|| caractere=='A'){
            a++;
        }
        if(caractere=='e'|| caractere=='E'){
            e++;
        }
        if(caractere=='i'|| caractere=='I'){
            i++;
        }
        if(caractere=='o'|| caractere=='O'){
            o++;
        }
        if(caractere=='u'|| caractere=='U'){
            u++;
        }

        }
    fclose(file);
    printf("Quantidade a||A: %d\nQuantidade e||E: %d\nQuantidade i||I: %d\nQuantidade o||O: %d\nQuantidade u||U: %d", a, e, i, o, u);
    printf("Vogais: %d", a+e+i+o+u);
}

    