//Faça uma função em linguagem C, que dado um vetor com n números reais, retorne o MAIOR número presentes no vetor.//
#include <stdio.h>
int maiornumvetor(int n, int *vetor){
    int maior = *(vetor+0);
    for(int i=1; i<n; i++){
        if(*(vetor+i)>maior){
            maior=*(vetor+i);}
        else{}
    }
    return maior;
}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", & *(vetor+i));
    }

    int maior=maiornumvetor(n, vetor);
    printf("%d", maior);
    return 0;
}