#include <stdio.h>
int eprimo(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<=n; i++){
        if(n%2==0){
            return 0;
        }
    }
    return n;
}

int somaprimos(int n, int vetor[]){
    int soma=0;
    for(int i=0; i<n; i++){
        if(eprimo(vetor[i])){
            soma=soma+vetor[i];
        }
    }
    return soma;
}
int main(){
    int n, soma;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    soma=somaprimos(n, vetor);
    printf("%d", soma);
    return 0;
}