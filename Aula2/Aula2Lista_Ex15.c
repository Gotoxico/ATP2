#include <stdio.h>
int adjacentesiguais(int n, int vetor[]){
    int sequencia=0, count=0;
    for(int i=0; i<n; i++){
        if(i>0 && vetor[i]==vetor[i-1]){
            count++;}
            if(count>sequencia){
                sequencia=count;}
        else{
            count=1;
        }
    }
    if(sequencia==1){
        return -1;}
    else{
        return 1;
    }
}
int main(){
    int n, adjacentes;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    adjacentes=adjacentesiguais(n, vetor);
    if(adjacentes==-1){
        printf("Não há adjacentes!");}
    else{
        printf("Há adjacentes!");
    }
}