#include <stdio.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int menor=vetor[0];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]<menor){
            menor=vetor[i];}
        else{}
    }
    for(int i=0; i<n; i++){
        printf("\n%d", vetor[i]*menor);
    }
    return 0;
}