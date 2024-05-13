#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void uniao(int n, int m, int vetor1[], int vetor2[]){
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int));
    for(int i=0; i<n; i++){
        resultante[tamanho]=vetor1[i];
        tamanho++;
    }
    for(int i=0; i<m; i++){
        int igual=0;
        for(int j=0; j<tamanho; j++){
            if(vetor2[i]==resultante[j]){
                igual=1;
                break;
            }
        }
        if(igual==0){
            resultante[tamanho]=vetor2[i];
            tamanho++;
        }
    }
    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

void interseccao(int n, int m, int vetor1[], int vetor2[]){
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vetor2[j]==vetor1[i]){
                resultante[tamanho]=vetor2[j];
                tamanho++;
                break;}
            else{}
        }
    }
    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

void diferencaAB(int n, int m, int vetor1[], int vetor2[]){
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int));
    for(int i=0; i<n; i++){
        int igual=0;
        for(int j=0; j<m; j++){
            if(vetor1[i]==vetor2[j]){
                igual=1;
                break;}
            else{}
        }
        if(igual==0){
            resultante[tamanho]=vetor1[i];
            tamanho++;
        }
    }
    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

void diferencaBA(int n, int m, int vetor1[], int vetor2[]){
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int));
    for(int i=0; i<n; i++){
        int igual=0;
        for(int j=0; j<m; j++){
            if(vetor2[i]==vetor1[j]){
                igual=1;
                break;}
            else{}
        }
        if(igual==0){
            resultante[tamanho]=vetor2[i];
            tamanho++;
        }
    }
    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

void presenteA(int n, int num, int vetor1[]){
    int flag=1;
    for(int i=0; i<n; i++){
        if(vetor1[i]==num){
            flag=0;
            break;}
    }
    if(flag==1){
        printf("Num: %d não presente\n", num);}
    else{
        printf("Num %d presente\n", num);
    }
}

void presenteB(int n, int num, int vetor1[]){
    int flag=1;
    for(int i=0; i<n; i++){
        if(vetor1[i]==num){
            flag=0;
            break;}
    }
    if(flag==1){
        printf("Num: %d não presente\n", num);}
    else{
        printf("Num %d presente\n", num);
    }
}

void repetidosA(int n, int vetor1[]){
    int count=0, diferentes[n];
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for(int j=0; j<count; j++){
            if(vetor1[i]==diferentes[j]){
                flag=0;
                break;}
        }
        if(flag==1){
            diferentes[count]=vetor1[i];
            count++;}
        else{}
    }
    if(count!=1){
        printf("Elementos repetidos: %d\n", count);}
    else{
        printf("Não há elementos repetidos!\n");
    }
}

void repetidosB(int n, int vetor1[]){
    int count=0, diferentes[n];
    for (int i = 0; i < n-1; i++) {
        for(int j=i+1; j<count; j++){
            if(vetor1[i]==diferentes[j]){
                count++;
                break;}
        }
    }
    if(count>0){
        printf("Elementos repetidos: %d\n", count);}
    else{
        printf("Não há elementos repetidos!\n");
    }
}



int main(){
    //setlocale(LC_ALL, "Portuguese");//
    int n, m;
        printf("Digite n: ");
        scanf("%d", &n);
    
    int A[n];
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("Digite m: ");
    scanf("%d", &m);

    int B[m];
    for(int i=0; i<m; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &B[i]);
    }
    int opcao;
    do{
        printf("1-União\n2-Intersecção\n3-Diferença A-B\n4-Diferença B-A\n5-Verificar presente A\n6-Verificar presente B\n7-Verificar repetidos A\n8-Verificar repetidos B\n9-Sair");
        printf("\nDigite uma opção: ");
        scanf("%d", &opcao);
        if(opcao==1){
            uniao(n, m, A, B);}
        if(opcao==2){
            interseccao(n, m, A, B);}
        if(opcao==3){
            diferencaAB(n, m, A, B);}
        if(opcao==4){
            diferencaBA(n, m, A, B);}
        if(opcao==5){
            int num;
            printf("Digite num: ");
            scanf("%d", &num);
            presenteA(n, num, A);}
        if(opcao==6){
            int num;
            printf("Digite num: ");
            scanf("%d", &num);
            presenteA(m, num, B);}
        if(opcao==7){
            repetidosA(n, A);}
        if(opcao==8){
            repetidosB(m, B);}
    }while(opcao!=9);

    

}