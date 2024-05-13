#include <stdio.h>
int main(){
    int n, soma;
    printf("Digite numero n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i%2!=0){
            soma=soma+i;
            printf("%d\n", i);}
    }
    printf("Soma: %d", soma);
    return 0;
}