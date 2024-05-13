#include <stdio.h>
int main(){
    int n, menor, index;
    printf("Type n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    menor=vetor[0];
    index=0;
    for(int i=1; i<n; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
            index=i;}
        else{}
    }
    printf("Menor index: %d", index);
    printf("\nMenor: %d", menor);
    return 0;
}