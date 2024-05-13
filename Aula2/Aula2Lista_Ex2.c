//Faça uma função em linguagem C, que dado um vetor com n números reais, retorne a posição do MAIOR número presente no vetor.//
#include <stdio.h>
int indexmaiornumvetor(int n, int vetor[]){
    int indexmaior=0;
    for(int i=0; i<n; i++){
        if(vetor[i]>indexmaior){
            indexmaior=i;}
        else{}
    }
    return indexmaior;
}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int indexmaior=vetor[0];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    indexmaior=indexmaiornumvetor(n, vetor);
    printf("%d", indexmaior);
    return 0;
}