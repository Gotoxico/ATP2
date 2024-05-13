#include <stdio.h>
int main(){
    int n;
    double somatorio=0.0;
    printf("Digite n: ");
    scanf("%d", &n);
    for(int k=1; n>=k; k++){
        somatorio=somatorio+(1.0/k);
    }
    printf("Somatorio: %f", somatorio);
    return 0;
}