#include <stdio.h>
int quantidadedivisiveis(int n, int vetor[], int a, int b){
    int count=0;
    for(int i=0; i<n; i++){
        if(vetor[i]%a==0 || vetor[i]%b==0 || (vetor[i]%a==0 && vetor[i]%b==0)){
            count++;
        }
    }
    return count;
}
int main(){
    int n, quantidade, a, b;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    quantidade=quantidadedivisiveis(n, vetor, a, b);
    printf("Quantidade divisiveis: %d", quantidade);
    return 0;
}