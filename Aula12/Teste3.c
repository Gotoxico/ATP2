#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[30];
    int idade;
}ALUNO;

void inserirAlunosVetor(ALUNO alunos[], int n){
    for(int i=0; i<n; i++){
        printf("\nDigite o nome do aluno: ");
        fflush(stdin);
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Digite a idade do aluno: ");
        scanf("%d", &alunos[i].idade);
    }
}

void escreverAlunosArquivo(ALUNO alunos[], int n){
    FILE *file;
    file = fopen("alunos.dat", "wb");
    if(file!=NULL){
        int qtdRegArquivo = fwrite(alunos, sizeof(ALUNO), n, file);
        printf("\nForam escritos %d registros", qtdRegArquivo);

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void lerAlunosArquivo(ALUNO alunos[], int n){
    FILE *file;
    file = fopen("alunos.dat", "rb");
    if(file!=NULL){
        int qtdLeiArquivo = fread(alunos, sizeof(ALUNO), n, file);
        printf("\nForam lidos %d registros", qtdLeiArquivo);

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
}

void imprimirAlunosVetor(ALUNO alunos[], int n){
    for(int i=0; i<n; i++){
        printf("\nNome aluno: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
    }
}

int main(){
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    ALUNO alunos[n];
    inserirAlunosVetor(alunos, n);
    escreverAlunosArquivo(alunos, n);

    ALUNO alunosLidos[n];
    lerAlunosArquivo(alunosLidos, n);
    imprimirAlunosVetor(alunosLidos, n);
}