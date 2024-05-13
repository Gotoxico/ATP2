#include <stdio.h>
void shellSort(int *vetor, int n) {
    // Começa com um espaçamento grande e o reduz gradativamente
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Percorre os elementos dentro do gap
        for (int i = gap; i < n; i++) {
            // Pega o elemento atual em consideração
            int temp = *(vetor+i);
            
            // Move os elementos que são maiores que o elemento atual
            // do subarray anterior para a posição correta
            int j;
            for (j = i; j >= gap && *(vetor+j - gap) > temp; j -= gap) {
                *(vetor+j) = *(vetor+j - gap);
            }
            
            // Coloca o elemento atual na posição correta
            *(vetor+j) = temp;
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
    shellSort(&vetor[0], n);
    for(int i=0; i<n; i++){
        printf("%d\n", *(vetor+i));
    }
    return 0;
}