#include <stdio.h>
int BuscaBinaria(int *vetor, int chave, int ini, int fim){
    int meio=(ini+fim)/2;
    if(ini>fim){
        return 0;}
    else{
        if(chave==*(vetor+meio)){
            return 1;}
        else{
            if(chave>*(vetor+meio)){
                return(BuscaBinaria(vetor, chave, meio+1, fim));}
            else{
                if(chave<*(vetor+meio)){
                    return(BuscaBinaria(vetor, chave, ini, meio-1));}
            }
        }
    }
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