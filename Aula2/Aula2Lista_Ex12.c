#include <stdio.h>
void multiplicarmaior(int n, float vetor[]){
    float maior=vetor[0];
    for(int i=0; i<n; i++){
        if(vetor[i]>=maior){
            maior=vetor[i];
        }
    }
    for(int i=0; i<n; i++){
        vetor[i]=vetor[i]*maior;
    }
}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    multiplicarmaior(n, vetor);
    for(int i=0; i<n; i++){
        printf("%f\n", vetor[i]);
    }
    return 0;
}