#include <stdio.h>
#include <locale.h>
int main(){
    int n;
    float soma=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite salário: ");
        scanf("%f", &vetor[i]);
        soma=soma+vetor[i];
    }
    printf("Soma salários: %f", soma);
    return 0;
}