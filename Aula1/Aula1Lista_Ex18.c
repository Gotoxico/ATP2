#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, soma=0, produto=1, soma2=0;
    double MA, MG, MRQ, soma3=0, MH, DP;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ",i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        soma=soma+vetor[i];
    }
    MA=(1.0/n)*soma;
    for(int i=0; i<n; i++){
        produto=produto*vetor[i];
    }
    MG=pow(produto, 1.0/8.0);
    for(int i=0; i<n; i++){
        soma2=soma2+vetor[i]*vetor[i];
    }
    MRQ=sqrt((1.0/n)*soma2);
    for(int i=0; i<n; i++){
        soma3=soma3+1.0/vetor[i];
    }
    MH=n/soma3;
    DP=sqrt((soma2-soma*soma)/(n*(n-1.0)));
    printf("MA: %lf", MA);
    printf("\nMG: %lf", MG);
    printf("\nMRQ: %lf", MRQ);
    printf("\nMH: %lf", MH);
    printf("\nDP: %lf", DP);


}