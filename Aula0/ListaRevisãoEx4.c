#include <stdio.h>
int main(){
    float NP1, NP2, NT1, NT2, MP, MT, MF;
    printf("Digite NP1: ");
    scanf("%f", &NP1);
    printf("Digite NP2: ");
    scanf("%f", &NP2);
    printf("Digite NT1: ");
    scanf("%f", &NT1);
    printf("Digite NT2: ");
    scanf("%f", &NT2);
    MP=(NP1+NP2)/2;
    MT=(NT1+NT2)/2;
    MF=(0.8*MP+0.2*MT);
    if (MF>=5){
        printf("APROVADO\nMEDIA FINAL: %f", MF);}
    else{
        printf("REPROVADO\nMEDIA FINAL: %f", MF);
    }
    return 0;
}