#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[30];
    int idade;
}ALUNO;

void exibirAluno(ALUNO *a){
    printf("Nome: %s\n", a->nome);
    printf("Idade: %d\n", a->idade);
}

int main(){
    FILE *file;
    file = fopen("alunos.dat", "rb");

    if(file!=NULL){
        ALUNO alunoAux;

        fseek(file, 2*sizeof(ALUNO), SEEK_SET);

        fseek(file, 1*sizeof(ALUNO), SEEK_CUR);
        fread(&alunoAux, sizeof(ALUNO), 1, file);
        exibirAluno(&alunoAux);
    }
}