//Implemente o algoritmo de Busca Binária (em sua versão iterativa) aplicado em um Vetor de números inteiros utilizando funções e notação de ponteiros.//
#include <stdio.h>
int BuscaBinaria(int *vetor, int chave, int ini, int fim){
    while(ini<=fim){
        int meio=(ini+fim)/2;
        if(chave==*(vetor+meio)){
            return 1;}
        else{
            if(chave>*(vetor+meio)){
                ini=meio+1;}
            else{
                if(chave<*(vetor+meio)){
                    fim=meio-1;
                }
            }
        }
    }
    return 0;
}
int main(){
    int n;
    printf("Digite tamanho vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite elemento %d: ", i+1);
        scanf("%d", &*(vetor+i));
    }
    int chave;
    printf("Digite chave: ");
    scanf("%d", &chave);
    int ini=0, fim=n, buscador;
    buscador=BuscaBinaria(vetor, chave, ini, fim);
    if(buscador==1){
        printf("Num presente!");}
    else{
        printf("Num não presente!");
    }
    return 0;
}