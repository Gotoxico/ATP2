#include <stdio.h>
int palindromo(int n, int vetor[]){
    int flag=1;
    for(int i=0; i<n/2; i++){
        if(vetor[i]!=vetor[n-1-i]){
            flag=0;
            break;
        }
    }
    if(flag){
        return 1;}
    else{
        return -1;
    }
}
int main(){
    int n, resultado;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    resultado=palindromo(n, vetor);
    printf("%d", resultado);
    return 0;
}