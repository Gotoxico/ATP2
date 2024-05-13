#include <stdio.h>
void mediasalarios(){
    int n;
    float soma=0;
    printf("Digite num de funcionarios: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite salario %d: ", i+1);
        scanf("%f", &vetor[i]);
        soma=soma+vetor[i];
    }
    printf("Media: %f", soma/n);
}
int main(){
    mediasalarios();
}