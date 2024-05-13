//Faça um algoritmo, em linguagem C, que crie uma Matriz quadrada de números inteiros de dimensão n x n, que permita o usuário inserir a quantidade de linhas e colunas (n) da Matriz, além de cada um de seus elementos. Por fim, permita ao usuário PERMUTAR os elementos de duas linhas dessa Matriz. Obs: O usuário deve indicar quais as duas linhas que ele quer permutar.

#include <stdio.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    int linha1, linha2;
    printf("Digite linha 1: ");
    scanf("%d", &linha1+1);
    printf("Digite linha 2: ");
    scanf("%d", &linha2+1);
    if(linha1>=0 && linha1<n && linha2>=0 && linha2<n){
        for(int j=0; j<n; j++){
            int troca=matriz[linha1][j];
            matriz[linha1][j]=matriz[linha2][j];
            matriz[linha2][j]=troca;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Elemento %dx%d: %d\n", i+1, j+1, matriz[i][j]);
        }
    }
    return 0;
}