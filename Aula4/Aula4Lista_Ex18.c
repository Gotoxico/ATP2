//Faça um algoritmo, em linguagem C, que crie uma Matriz de números inteiros de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba o MAIOR e MENOR dos números inseridos e suas respectivas posição na Matriz.//
#include <stdio.h>

void InserirMatriz(int n, int m, int *matriz){ //Função para criar matriz//
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &*(matriz+i*n+j));
        }
    }
}

//Espaço//

void MaiorEMenorMatriz(int n, int m, int *matriz){
    int maior=*(matriz+0*n+0), menor=*(matriz+0*n+0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(*(matriz+i*n+j)>=maior){
                maior=*(matriz+i*n+j);}
            else{
                if(*(matriz+i*n+j)<=menor){
                    menor=*(matriz+i*n+j);
                }
            }
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
}

//Espaço//

int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m];
    InserirMatriz(n, m, &matriz[0][0]);
    MaiorEMenorMatriz(n, m, &matriz[0][0]);
    return 0;
}