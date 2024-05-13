//Faça um algoritmo, em linguagem C, que crie uma Matriz quadrada de números reais de dimensão n x n, que permita o usuário inserir a quantidade de linhas e colunas (n) da Matriz, além de cada um de seus elementos, por fim, encontre e exiba a soma de cada uma das linhas e de cada uma das colunas dessa Matriz.//
#include <stdio.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    float matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i=0; i<n; i++){ //Somador de elementos das linhas//
        float soma=0;
        for(int j=0; j<n; j++){
            soma=soma+matriz[i][j];
        }
        printf("Soma linha %d: %f\n", i+1, soma);
    }

    for(int j=0; j<n; j++){ //Somador de elementos das colunas//
        float soma=0;
        for(int i=0; i<n; i++){
            soma=soma+matriz[i][j];
        }
        printf("Soma coluna %d: %f\n", j+1, soma);
    }
    return 0;
}