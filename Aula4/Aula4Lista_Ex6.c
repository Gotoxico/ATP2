#include <stdio.h>
float mediasalarios(int n, float *vetor){
    float soma=0;
    for(int i=0; i<n; i++){
        soma=soma+*(vetor+i);
    }
    return(soma/n);
}
int main(){
    int n;
    float media;
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    media=mediasalarios(n, vetor);
    printf("Media salarios: %f", media);
}