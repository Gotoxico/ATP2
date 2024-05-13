#include <stdio.h>
#include <locale.h>
int main(){
    int n, count=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]>=18){
            count++;}
        else{}
    }
    printf("Pessoas maiores de idade: %d", count);
    return 0;
}
