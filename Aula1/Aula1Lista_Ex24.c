#include <stdio.h>
int main(){
    int n, sequencia=0, count=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
        if(i>0 && vetor[i]==vetor[i-1]){
            count++;}
            if(count>sequencia){
                sequencia=count;}
        else{
            count=1;
        }
    }
    if(sequencia==1){
        printf("O vetor não possui números adjacentes iguais");}
    else{
        printf("O vetor possui números adjacentes iguais, o tamanho da maior sequência de números adjacentes iguais é %d", sequencia);
    }
    return 0;
}