#include <stdio.h>
int main(){
    int n, maior, menor, indexmaior, indexmenor;
    printf("Type n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    menor=vetor[0];
    indexmaior=0;
    indexmenor=0;
    for(int i=1; i<n; i++){
        if(vetor[i]>maior){
            menor=maior;
            indexmenor=indexmaior;
            maior=vetor[i];
            indexmaior=i;}
        else{
            if(vetor[i]<menor){
                menor=vetor[i];
                indexmenor=i;
            }
            else{}
        }
    }
    printf("Maior index: %d", indexmaior);
    printf("\nMaior: %d", maior);
    printf("\nMenor index: %d", indexmenor);
    printf("\nMenor: %d", menor);
    return 0;
}