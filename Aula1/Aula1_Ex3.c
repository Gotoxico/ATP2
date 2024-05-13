#include <stdio.h>
int main(){
    int n, maior, index;
    printf("Type n:");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    index=0;
    for(int i=1; i<n; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            index=i;}
        else{}
    }
    printf("Maior index: %d", index);
    return 0;
}