#include <stdio.h>
int eprimo(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<=n/2; i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}

int somaprimos(int n, int vetor[]){
    int maior=vetor[0];
    for(int i=0; i<n; i++){
        if(eprimo(vetor[i])){
            if(vetor[i]>=maior){
                maior=vetor[i];
            }
        }
    }
    return maior;
}
int main(){
    int n, maior;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    maior=somaprimos(n, vetor);
    printf("%d", maior);
    return 0;
}