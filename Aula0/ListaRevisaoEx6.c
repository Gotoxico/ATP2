#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int idade;
    printf("Digite idade: ");
    scanf("%d", &idade);
    if (idade>=1 && idade<=9){
        printf("crianca");}
    else{
        if(idade>=10 && idade<=12){
            printf("pre-adolescente");}
        else{
            if(idade>=13 && idade<=17){
                printf("adolescente");}
            else{
                if(idade>=18 && idade<=59){
                    printf("adulto");}
                else{
                    if(idade>=60){
                        printf("idoso");}
                    else{}
                }
            }
        }
    }
    return 0;
}