#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, number, flag=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite número: ");
    scanf("%d", &number);
    for(int i=0; i<n; i++){
        if(vetor[i]==number){
            flag=1;
            break;}
        else{}
    }
    if(flag==1){
        printf("Número buscado foi encontrado");}
    else{
        printf("Número buscado não foi encontrado");
    }
    return 0;
}