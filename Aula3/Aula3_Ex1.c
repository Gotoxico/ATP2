#include <stdio.h>

int main(){
    int n, m;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    float matriz[n][m];
    float resultado=0.0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite elemento %d, %d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            resultado=resultado+matriz[i][j];
        }
    }
    printf("Resultado: %f", resultado);
}