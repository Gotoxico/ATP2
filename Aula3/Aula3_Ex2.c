#include <stdio.h>

int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    float matriz[n][m];
    float maior=matriz[0][0];
    int posicaoi=0, posicaoj=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %d, %d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j]>=maior){
                maior=matriz[i][j];
                posicaoi=i;
                posicaoj=j;
            }
        }
    }
    printf("Maior: %f e posicao: %d, %d", maior, posicaoi+1, posicaoj+1);
    return 0;
}