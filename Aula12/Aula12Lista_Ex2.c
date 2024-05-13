//2) Percorrer o arquivo binário e indicar a quantidade de alunos maiores de idade (utilize fseek, ftell, fread e laço de repetição)//

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
    file = fopen("alunos2.dat", "wb");
    if(file!=NULL){
        for(int i=0; i<n; i++){
            fseek(file, i*36, SEEK_SET);
            fwrite(&alunos[i], sizeof(ALUNO), 1, file);
        }

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

void lerAlunosArquivo(ALUNO alunos[], int n){
    FILE *file;
    file = fopen("alunos2.dat", "rb");

    int count=0;
    if(file!=NULL){
        for(int i=0; i<n; i++){
            fseek(file, i*36, SEEK_SET);
            fread(&alunos[i], sizeof(ALUNO), 1, file);
            if(alunos[i].idade>=18){
                count++;
            }
        }
        printf("Maiores de idade: %d", count);
        

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