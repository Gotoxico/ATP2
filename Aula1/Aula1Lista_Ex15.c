#include <stdio.h>
#include <locale.h>
//Fa�a um algoritmo, em linguagem C, que crie um vetor com n n�meros
//reais e que permita o usu�rio inserir cada um dos n�meros, por fim,
//obtenha exiba a soma dos elementos presentes no vetor que est�o nas
//posi��es pares.
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, soma=0;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite n�mero %d: ", i+1);
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