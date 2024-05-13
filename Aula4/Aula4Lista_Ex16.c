//Faça um algoritmo, em linguagem C, que crie uma Matriz de números inteiros de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba o MAIOR dos números inseridos e sua posição na Matriz.//
#include <stdio.h>
void InserirMatriz(int n, int m, int *matriz){ //Função para criar matriz//
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &*(matriz+i*n+j));
        }
    }
}

int MaiorMatriz(int n, int m, int *matriz){ //Função para encontrar maior elemento matriz//
    int maior;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(*(matriz+i*n+j)>=maior){
                maior=*(matriz+i*n+j);}
        }
    }
    return maior;
}

int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m];
    InserirMatriz(n, m, &matriz[0][0]);
    int maior=MaiorMatriz(n, m, &matriz[0][0]);
    printf("Maior: %d", maior);
    return 0;
}