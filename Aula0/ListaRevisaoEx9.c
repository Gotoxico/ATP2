#include <stdio.h>
int main(){
    int num;
    printf("Digite um codigo inteiro entre 1 e 8: ");
    scanf("%d", &num);
    if(num==0 || num>=9){
        printf("Codigo invalido");}
    else{
        switch(num){
            case 1:
            printf("Detergente");
            break;
            case 2:
            printf("Alcool em Gel");
            break;
            case 3:
            printf("Alcool em Gel");
            break;
            case 4:
            printf("Geladeira");
            break;
            case 5:
            printf("Geladeira");
            break;
            case 6:
            printf("Geladeira");
            break;
            case 7:
            printf("Sapato");
            break;
            case 8:
            printf("Sapato");
            break;
        }
    }
}