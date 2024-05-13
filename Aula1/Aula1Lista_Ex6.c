#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        if(vetor[i]>=1 && vetor[i]<=9){
            printf("\n%d: Criança", vetor[i]);}
        else{
            if(vetor[i]>=10 && vetor[i]<=12){
                printf("\n%d: Pré-adolescente", vetor[i]);}
            else{
                if(vetor[i]>=13 && vetor[i]<=17){
                    printf("\n%d: Adolescente", vetor[i]);}
                else{
                    if(vetor[i]>=18 && vetor[i]<=59){
                        printf("\n%d: Adulto", vetor[i]);}
                    else{
                        if(vetor[i]>=60){
                            printf("\n%d: Idoso", vetor[i]);}
                        else{}
                    }
                }
            }
        }
    }
    return 0;
}