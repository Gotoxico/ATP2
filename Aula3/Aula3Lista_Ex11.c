//Faça um algoritmo, em linguagem C, que crie duas Matrizes quadradas de números inteiros de mesma dimensão n x n, que permita o usuário inserir a quantidade de linhas e colunas (n) das Matrizes, além de cada um de seus elementos, por fim, obtenha e mostre a Matriz resultante da soma das duas Matrizes criadas pelo usuário.//
#include <stdio.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int A[n][n], B[n][n], C[n][n];
    printf("Preencha matriz A: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Preencha matriz B: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            printf("Elemento de C %dx%d: %d\n", i+1, j+1, C[i][j]);
        }
    }
}