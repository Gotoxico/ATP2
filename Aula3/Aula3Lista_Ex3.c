//Faça um algoritmo, em linguagem C, que crie uma Matriz de números inteiros de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba o MAIOR e MENOR dos números inseridos e suas respectivas posição na Matriz//
#include <stdio.h>
int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m], menor=0, maior=0, posicaoimenor=0, posicaojmenor=0, posicaoimaior=0, posicaojmaior=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]<=menor || (posicaoimenor==0 && posicaojmenor==0)){
                menor=matriz[i][j];
                posicaoimenor=i;
                posicaojmenor=j;}
            if(matriz[i][j]>=maior || (posicaoimaior==0 && posicaojmaior==0)){
                maior=matriz[i][j];
                posicaoimaior=i;
                posicaojmaior=j;}
        }
    }
    printf("Menor: %d\nPosicaoimenor: %d\nPosicaojmenor: %d\nMaior: %d\nPosicaoimaior: %d\nPosicaojmaior: %d", menor, posicaoimenor+1, posicaojmenor+1, maior, posicaoimaior+1, posicaojmaior+1);
    return 0;
}