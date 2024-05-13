//Faça um algoritmo, em linguagem C, que crie uma Matriz de números reais de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba a multiplicação e a soma de todos os elementos da Matriz.//
#include <stdio.h>
int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m], soma=0, produto=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma=soma+matriz[i][j];
            produto=produto*matriz[i][j];
        }
    }
    printf("Soma: %d\nProduto: %d", soma, produto);
    return 0;
}