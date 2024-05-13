#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    int n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    float resultadoRaiz[n];
    for(int i=0; i<n; i++){
        printf("Digite numero: ");
        scanf("%f", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        resultadoRaiz[i]=sqrt(vetor[i]);
        printf("\n%.2f", resultadoRaiz[i]);
    }
    return 0;
}