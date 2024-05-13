#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, count=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    int primo[n];
    for(int i=0; i<n; i++){
        printf("Digite número: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        int flag=1;
        for(int j=2; j<=vetor[i]/2; j++){
            if(vetor[i]%i==0){
                flag=0;
                break;
            }
        }
        if(flag && vetor[i]>1){
            primo[count]=vetor[i];
            count++;
        }
    }
    printf("Quantidade: %d", count);
    printf("\nPrimos: ");
    for(int i=0; i<count; i++){
        printf("%d",primo[i]);
        printf("\n");
    }
    return 0;
}