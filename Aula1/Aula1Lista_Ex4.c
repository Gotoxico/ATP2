#include <stdio.h>
int main(){
    int n, maior, segmaior, index, indexsegmaior;
    printf("Type n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Type number: ");
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    segmaior=vetor[0];
    index=0;
    indexsegmaior=0;
    for(int i=1; i<n; i++){
        if(vetor[i]>maior){
            segmaior=maior;
            indexsegmaior=index;
            maior=vetor[i];
            index=i;}
        else{
            if(vetor[i]>segmaior){
                segmaior=vetor[i];
                indexsegmaior=i;
            }
            else{}
        }
    }
    printf("Maior index: %d", index);
    printf("\nMaior: %d", maior);
    printf("\nSegmaior: %d", segmaior);
    printf("\nIndexsegmaior: %d", indexsegmaior);
    return 0;
}