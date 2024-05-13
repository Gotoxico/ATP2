//Implemente o Algoritmo de Ordenação Bubble Sort com melhoria/otimizações de trocas para ordenar um vetor em ordem crescente. Explique a diferença entre a versão original e a versão com melhoria/otimização.//
#include <stdio.h>
void bubbleSortMelhorado(int *vetor, int tamanhoVetor){

    int i, j, aux, ocorreuTroca;
    for (i = 1; i < tamanhoVetor; i++){         //Controla o numero de varreduras
        ocorreuTroca = 0; //Não ocorreu troca
        for (j = 0; j < tamanhoVetor-1; j++){   // Aponta para as posicoes do vetor

            if (*(vetor+j) < *(vetor+j+1)){  //Permutando elementos
                aux =  *(vetor+j);
                *(vetor+j) = *(vetor+j+1);
                *(vetor+j+1) = aux;
                ocorreuTroca = 1; //Ocorreu troca
            }
        } //Fim for interno
        if(ocorreuTroca == 0) return;//Não ocorreu troca
    } //Fim for externo
    return;
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
    bubbleSortMelhorado(&vetor[0], n);
    for(int i=0; i<n; i++){
        printf("%d\n", *(vetor+i));
    }
    return 0;
}