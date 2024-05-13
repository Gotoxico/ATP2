#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    int n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int quadrado[n];
    int cubo[n];
    for(int i=0; i<n; i++){
        printf("Digite numero: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        quadrado[i]=pow(vetor[i],2);
        cubo[i]=pow(vetor[i], 3);
        printf("\nQuadrado: %d e cubo: %d", quadrado[i], cubo[i]);
    }
    return 0;
}
