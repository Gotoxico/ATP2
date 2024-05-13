//Faça uma função em linguagem C, que dado um vetor com n números reais e um número real constante. Multiplique os números presentes no vetor por esse número real e utilize uma função que exibe os dados de um vetor para exibir o vetor com os valores resultantes.//
#include <stdio.h>
void multiplicador(int n, int num, int *vetor){
    for(int i=0; i<n; i++){
        *(vetor+i)=*(vetor+i)*num;
    }
}
void exibidor(int n, int *vetor){
    for(int i=0; i<n; i++){
        printf("%d\n", *(vetor+i));
    }
}
int main(){
    int n, num;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite num: ");
    scanf("%d", &num);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    multiplicador(n, num, vetor);
    exibidor(n, vetor);
    return 0;
}