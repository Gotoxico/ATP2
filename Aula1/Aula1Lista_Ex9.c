#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número: ");
        scanf("%f", &vetor[i]);
    }
    float constante;
    printf("Digite constante: ");
    scanf("%f", &constante);
    for(int i=0; i<n; i++){
        printf("%f\n", vetor[i]*constante);
    }
    return 0;
}