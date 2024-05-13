//Faça uma função em linguagem C, que dado um vetor com n números retorne a soma dos números pares presentes no vetor.//
#include <stdio.h>
int somapares(int n, int *vetor){
    int soma=0;
    for(int i=0; i<n; i++){
        if(*(vetor+i)%2==0){
            soma=soma+*(vetor+i);
        }
    }
    return soma;
}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int soma;
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    soma=somapares(n, vetor);
    printf("%d", soma);
    return 0;
}