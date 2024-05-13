#include <stdio.h>
int somaquadrados(int n, int vetor[]){
    int quadrado[n], soma=0;
    for(int i=0; i<n; i++){
        quadrado[i]=vetor[i]*vetor[i];
        soma=soma+quadrado[i];
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
    soma=somaquadrados(n, vetor);
    printf("Soma: %d", soma);
}