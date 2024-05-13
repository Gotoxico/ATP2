#include <stdio.h>
int main(){
    int n;
    double soma=0.0;
    printf("Digite n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        soma+=(double)i/(n-i+1);
    }
    printf("Soma: %lf", soma);
    return 0;
}