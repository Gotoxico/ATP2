#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);
    printf("Digite n3: ");
    scanf("%f", &n3);
    media=(n1+n2+n3)/3;
    if(media>=9){
        printf("Conceito A");}
    else{
        if(media<9 && media>=7.5){
            printf("Conceito B");}
        else{
            if(media<7.5 && media>=6){
                printf("Conceito C");}
            else{
                if(media<6 && media>=4){
                    printf("Conceito D");}
                else{
                    printf("Conceito E");
                }
            }
        }
    }
    return 0;
}