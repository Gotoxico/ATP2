#include <stdio.h>
int main(){
    int n, maior;
    printf("Type n:");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    for(int i=1; i<n; i++){
        if(vetor[i]>maior){
            maior=vetor[i];}
        else{}
    }
    printf("Maior: %d", maior);
    return 0;
}