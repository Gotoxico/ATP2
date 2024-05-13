//Faça um algoritmo, em linguagem C, que crie uma Matriz de números reais de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, obtenha e exiba a TRANSPOSTA dessa Matriz.//
#include <stdio.h>
int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    float matriz[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    float transposta[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transposta[j][i]=matriz[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Elemento %dx%d: %f\n", i+1, j+1, transposta[i][j]);
        }
    }
    return 0;
}