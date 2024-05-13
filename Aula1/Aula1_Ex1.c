#include <stdio.h>
int main(){
    int n, soma=0, media;
    printf("Type n:");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        soma=soma+vetor[i];
    }
    media=soma/n;
    printf("Media: %d", media);
    return 0;
}