//Faça um algoritmo, em linguagem C, que crie uma Matriz de números inteiros de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba o MAIOR dos números inseridos e sua posição na Matriz.//
#include <stdio.h>
int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m], maior=matriz[0][0], posicaoi=0, posicaoj=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]>=maior){
                maior=matriz[i][j];
                posicaoi=i;
                posicaoj=j;}
        }
    }
    printf("Maior: %d\nPosicaoi: %d\nPosicaoj: %d", maior, posicaoi+1, posicaoj+1);
    return 0;
}