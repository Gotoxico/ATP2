//Daniel Henrique Peres Servejeira // Rodrigo Isao Goto//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void bubbleSortMelhorado(int *vetor, int tamanhoVetor){ //Função do algoritmo de ordenação bubble//

    int i, j, aux, ocorreuTroca;
    for (i = 1; i < tamanhoVetor; i++){         
        ocorreuTroca = 0; 
        for (j = 0; j < tamanhoVetor-1; j++){   

            if (*(vetor+j) > *(vetor+j+1)){  
                aux =  *(vetor+j);
                *(vetor+j) = *(vetor+j+1);
                *(vetor+j+1) = aux;
                ocorreuTroca = 1; 
            }
        } 
        if(ocorreuTroca == 0) return;
    } 
    return;
}

//Espaço//

void insertionSort(int *vetor, int tamanhoVetor){ //Função do algoritmo de ordenação insertion//

    int i, j, chave;

    for (i = 1; i < tamanhoVetor; i++){       
        chave = *(vetor+i);
        j = i-1;
        while ((j >= 0) && (*(vetor+j) > chave)){  
            *(vetor+j+1) = *(vetor+j);  
            j--;
        }
        *(vetor+j+1) = chave; 
    }
    return;
}

//Espaço//

void uniao(int n, int m, int vetor1[], int vetor2[]){ //Função para realizar união//
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int)); //Aloca espaço dinamicamente//
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

    int aux, flag; //Bubble sort resultante//
    for (int i = 0; i < tamanho-1; i++){         
        flag = 0; 
        for (int j = 0; j < tamanho-1; j++){   
            if (*(resultante+j) > *(resultante+j+1)){  
                aux =  *(resultante+j);
                *(resultante+j) = *(resultante+j+1);
                *(resultante+j+1) = aux;
                flag = 1; 
            }
        } 
        if(flag == 0){
            break;
        }
    } 

    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

//Espaço//

void interseccao(int n, int m, int vetor1[], int vetor2[]){ //Função para intersecção//
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int)); //Aloca espaço dinamicamente//
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vetor2[j]==vetor1[i]){
                resultante[tamanho]=vetor2[j];
                tamanho++;
                break;}
            else{}
        }
    }

    int aux, flag; //Bubble sort resultante//
    for (int i = 0; i < tamanho-1; i++){         
        flag = 0; 
        for (int j = 0; j < tamanho-1; j++){   
            if (*(resultante+j) > *(resultante+j+1)){  
                aux =  *(resultante+j);
                *(resultante+j) = *(resultante+j+1);
                *(resultante+j+1) = aux;
                flag = 1; 
            }
        } 
        if(flag == 0){
            break;
        }
    } 

    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

//Espaço//

void diferenca(int n, int m, int vetor1[], int vetor2[]){ //Diferença A e B//
    int tamanho=0;
    int *resultante=(int*)malloc((n+m)*sizeof(int)); //Aloca espaço dinamicamente//
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

    int aux, flag; //Bubble sort resultante//
    for (int i = 0; i < tamanho-1; i++){         
        flag = 0; 
        for (int j = 0; j < tamanho-1; j++){   
            if (*(resultante+j) > *(resultante+j+1)){  
                aux =  *(resultante+j);
                *(resultante+j) = *(resultante+j+1);
                *(resultante+j+1) = aux;
                flag = 1; 
            }
        } 
        if(flag == 0){
            break;
        }
    } 

    for(int i=0; i<tamanho; i++){
        printf("%d\n", resultante[i]);
    }
    free(resultante);
}

//Espaço//

void presente(int n, int num, int vetor1[]){ //Função para verificar presença elemento//
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

//Espaço//

void repetidos(int n, int vetor1[]){ //Função para contar repetidos//
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
        printf("Não há elementos repetidos!\n");}
        
    else{
        printf("Elementos repetidos: %d\n", count);
    }
}

//Espaço//

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

    bubbleSortMelhorado(A, n);
    insertionSort(B, m);

    int opcao;
    do{
        printf("1-União\n2-Intersecção\n3-Diferença A-B\n4-Diferença B-A\n5-Verificar presente A\n6-Verificar presente B\n7-Verificar repetidos A\n8-Verificar repetidos B\n9-Sair"); //Menu//
        printf("\nDigite uma opção: ");
        scanf("%d", &opcao);
        if(opcao==1){
            uniao(n, m, A, B);}
        if(opcao==2){
            interseccao(n, m, A, B);}
        if(opcao==3){
            diferenca(n, m, A, B);}
        if(opcao==4){
            diferenca(n, m, B, A);}
        if(opcao==5){
            int num;
            printf("Digite num: ");
            scanf("%d", &num);
            presente(n, num, A);}
        if(opcao==6){
            int num;
            printf("Digite num: ");
            scanf("%d", &num);
            presente(m, num, B);}
        if(opcao==7){
            repetidos(n, A);}
        if(opcao==8){
            repetidos(m, B);}
    }while(opcao!=9);
}