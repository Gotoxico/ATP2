#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("enter number: ");
        scanf("%d",&vetor[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("\nIndex %d: %d", i, vetor[i]);
    }
    return 0;
}