#include <stdio.h>
int buscador(int n, int target, int vetor[]){
    int count=0;
    for(int i=0; i<n; i++){
        if(vetor[i]>=target){
            count++;
        }
    }
    return count;
}
int main(){
    int n, target, quantidade;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Digite target: ");
    scanf("%d", &target);
    for(int i=0; i<n; i++){
        printf("Digite num %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    quantidade=buscador(n, target, vetor);
    printf("%d", quantidade);
    return 0;
}