#include <stdio.h>
#include <locale.h>
//Faça um algoritmo, em linguagem C, que crie um vetor com n números
//reais e que permita o usuário inserir cada um dos números, por fim,
//obtenha exiba a soma dos elementos presentes no vetor que estão nas
//posições pares.
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, soma=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d",&vetor[i]);
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            soma=soma+vetor[i];
        }
        else{}
    }
    printf("Soma: %d", soma);
}