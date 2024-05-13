//3) Implemente uma busca linear em um arquivo binário (utilize fseek).//

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
    file = fopen("alunos3.dat", "wb");
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

void lerAlunosArquivo(ALUNO alunos[], int n, char chave[]){
    FILE *file;
    file = fopen("alunos3.dat", "rb");

    if(file!=NULL){
        for(int i=0; i<n; i++){
            fseek(file, i*36, SEEK_SET);
            fread(&alunos[i], sizeof(ALUNO), 1, file);
            if(strcmp(alunos[i].nome, chave)==0){
                printf("Encontrou: ");
                printf("%s %d", alunos[i].nome, alunos[i].idade);
                break;
            }
        }

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
}

int main(){
    int n;
    char chave[100];
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    printf("Digite chave: ");
    fflush(stdin);
    gets(chave);

    ALUNO alunos[n];
    inserirAlunosVetor(alunos, n);
    escreverAlunosArquivo(alunos, n);

    ALUNO alunosLidos[n];
    lerAlunosArquivo(alunosLidos, n, chave);
}
