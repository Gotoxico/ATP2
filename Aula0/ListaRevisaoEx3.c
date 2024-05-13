#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float MA, MG, MRQ, DP, MH;
    float auxiliar;
    float soma=0, produto=1, somasquared=0, somainversa=0;
    for(int i=1; i<6; i++){
        float n, nsquared;
        printf("Digite n: ");
        scanf("%f", &n);
        soma=soma+n;
        produto*=n;
        nsquared=n*n;
        somasquared=somasquared+nsquared;
        somainversa=somainversa+(1/n);

    }
    MA=0.2*soma;
    MG=pow(produto,0.2);
    auxiliar=0.2*somasquared;
    MRQ=sqrt(auxiliar);
    DP=(somasquared-soma*soma)/20;
    MH=5/somainversa;



    printf("MA: %f", MA);
    printf("\nMG: %f", MG);
    printf("\nMRQ: %f", MRQ);
    printf("\nDP: %f", DP);
    printf("\nMH: %f", MH);
}