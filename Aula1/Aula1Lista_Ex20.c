#include <stdio.h>
#include <locale.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d", vetor[i]);
    }
    return 0;
}