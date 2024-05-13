//Faça um algoritmo, em linguagem C, que crie uma Matriz de números inteiros, maiores que zero, de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz,além de cada um de seus elementos, por fim, realize a operação de divisão dessa Matriz por um número inteiro inserido pelo usuário. Exiba a Matriz resultante dessa divisão.//
#include <stdio.h>
int main(){
    int n, m, num;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    printf("Digite num divisor: ");
    scanf("%d", &num);
    double matriz[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%lf", &matriz[i][j]);
            matriz[i][j]=matriz[i][j]/num;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Elemento %dx%d: %.2f\n", i+1, j+1, matriz[i][j]);
        }
    }
}