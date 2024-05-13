#include <stdio.h>
void multiplicador(){
    int n;
    float num;
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    float resultante[n];
    printf("Digite num: ");
    scanf("%f", &num);
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%f", &vetor[i]);
        resultante[i]=vetor[i]*num;
    }
    for(int i=0; i<n; i++){
        printf("Num %d: %f\n", i+1, resultante[i]);
    }
}

int main(){
    multiplicador();
}