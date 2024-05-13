//Implemente o algoritmo de Busca Linear aplicado em uma Matriz utilizando funções e notação de ponteiros.//
#include <stdio.h>
void criadormatriz(int n, int m, int *matriz){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Digite elemento %dx%d: ", i+1, j+1);
            scanf("%d", &*(matriz+i*n+j));
        }
    }
}
int buscadormatriz(int n, int m, int *matriz, int chave){
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(*(matriz+i*n+j)==chave){
                flag=1;
                break;}
            else{}
        }
    }
    if(flag){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n, m, chave, presente;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    int matriz[n][m];
    printf("Digite chave: ");
    scanf("%d", &chave);
    criadormatriz(n, m, &matriz[0][0]);
    presente=buscadormatriz(n, m, &matriz[0][0], chave);
    if(presente==1){
        printf("Está presente!");}
    else{
        printf("Não está presente!");
    }
}