#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite a: ");
    scanf("%f", &a);
    printf("Digite b: ");
    scanf("%f", &b);
    printf("Digite c: ");
    scanf("%f", &c);
    delta=(b*b)-(4*a*c);
    if(a==0){
        printf("Nao e equacao quadratica");}
    else{
        if(delta>=0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
        printf("Raiz 1: %f\nRaiz 2: %f", x1, x2);}
        else{
            printf("Raizes complexas");
        }
    }
    return 0;
}