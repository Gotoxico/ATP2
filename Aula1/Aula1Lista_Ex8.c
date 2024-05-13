#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, soma=0, produto=1, count=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        if(vetor[i]%2!=0){
            soma=soma+vetor[i];
            produto=produto*vetor[i];
            count++;
        }
    }
    printf("Soma: %d", soma);
    if(count==0){
        printf("\nProduto: 0");}
    else{
        printf("\nProduto: %d", produto);
    }
    printf("\nContador: %d", count);
    return 0;
}