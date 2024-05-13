//Faça uma função em linguagem C, que dado um vetor com n idades, retorne à quantidade de adultos presentes no vetor, sabendo adulto corresponde a faixa etária de idade entre 18 e 59 anos.//
#include <stdio.h>
int quantidadeadultos(int n, int vetor[]){
    int count=0;
    for(int i=0; i<n; i++){
        if(vetor[i]>=18 && vetor[i]<=59){
            count++;}
        else{}
    }
    return count;
}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int quantidade;
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    quantidade=quantidadeadultos(n, vetor);
    printf("%d", quantidade);
    return 0;
}