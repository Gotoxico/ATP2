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
            printf("Alimento nao-perecivel");
            break;
            case 2:
            printf("Alimento perecivel");
            break;
            case 3:
            printf("Alimento perecivel");
            break;
            case 4:
            printf("Vestuario");
            break;
            case 5:
            printf("Vestuario");
            break;
            case 6:
            printf("Vestuario");
            break;
            case 7:
            printf("Eletronicos");
            break;
            case 8:
            printf("Eletronicos");
            break;
        }
    }
}