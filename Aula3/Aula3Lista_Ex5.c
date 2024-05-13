#include <stdio.h>
int main(){
    int n, m, count=0;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m], vetor[n*m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite num %d x %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]%2!=0){
                vetor[i*m+j]=matriz[i][j];
                count++;
            }
        }
    }
    printf("Quantidade: %d", count);
    for(int a=0; a<n*m; a++){
        if (vetor[a] != 0) {
            printf("\n%d", vetor[a]);
        }
    }
    return 0;
}