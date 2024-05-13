//1) Faça uma função que considere um arquivo binário, encontre a quantidade de registros armazenados nesse arquivo. As funções fseek() e ftell() podem ser interessantes para auxiliar nessa implementação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[30];
    int idade;
}ALUNO;

void escreverAlunoArquivo(){
    ALUNO aluno[1];
    for(int i=0; i<1; i++){
        printf("Digite nome: ");
        fflush(stdin);
        gets(aluno[i].nome);
        printf("Digite idade: ");
        scanf("%d", &aluno[i].idade);
    }
    
    FILE *file;
    file = fopen("Lista8_Ex1.dat", "ab");

    fwrite(&aluno, sizeof(ALUNO), 1, file);
    fclose(file);
    
    return;
}

void lerAlunosArquivo(){
    FILE *file;
    file = fopen("Lista8_Ex1.dat", "rb");
    if(file!=NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeAlunos = ftell(file)/sizeof(ALUNO);
        fseek(file, 0, SEEK_SET);

        ALUNO alunos[quantidadeAlunos];
        fread(alunos, sizeof(ALUNO), quantidadeAlunos, file);

        for(int i=0; i<quantidadeAlunos; i++){
            printf("Nome %d: %s\n", i+1, alunos[i].nome);
            printf("Idade %d: %d\n", i+1, alunos[i].idade);
        }

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!\n");
    }
    return;
}

void QuantidadeRegistrosArquivoBinario(){
    FILE *file;
    file = fopen("Lista8_Ex1.dat", "rb");
    if(file!=NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeAlunos = ftell(file)/sizeof(ALUNO);

        printf("\nForam lidos %d registros\n", quantidadeAlunos);

        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!\n");
    }
    return;
}



int main(){
    int opcao;
    do{
        printf("Menu para manipulacao de arquivo binario\n");
        printf("1 - Escrever aluno\n");
        printf("2 - Ler alunos\n");
        printf("3 - Verificar quantidade alunos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                escreverAlunoArquivo();
                break;
            case 2:
                lerAlunosArquivo();
                break;
            case 3:
                QuantidadeRegistrosArquivoBinario();
                break;
            case 4:
                printf("Saiu!");
                break;
            default:
                printf("Opcao invalida!");
                break;
        }
    }while(opcao!=4);

    return 0;
}