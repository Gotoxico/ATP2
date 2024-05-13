#include <stdio.h>
#include <math.h>
float hipotenusa(float cat1, float cat2){
    float hipsquared, hip;
    cat1=cat1*cat1;
    cat2=cat2*cat2;
    hipsquared=cat1+cat2;
    hip=sqrt(hipsquared);
    return hip;
}
int main(){
    float cat1, cat2, hip;
    printf("Este é um programa para calcular hipotenusa de um triangulo retangulo");
    printf("\nDigite cateto 1: ");
    scanf("%f", &cat1);
    printf("Digite cateto 2: ");
    scanf("%f", &cat2);
    hip=hipotenusa(cat1, cat2);
    printf("Hipotenusa: %f", hip);
    return 0;
}