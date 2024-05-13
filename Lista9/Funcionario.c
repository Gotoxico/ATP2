#include "Funcionario.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FUNCIONARIO* criarFuncionario(const char *nome, const char *CPF, float salario){
    FUNCIONARIO *f = (FUNCIONARIO*) malloc(sizeof(FUNCIONARIO));
    if(f != NULL){
        strcpy(f->nome, nome);
        strcpy(f->CPF, CPF);
        f->salario = salario;
    }
    return f;
}

void destruirFuncionario(FUNCIONARIO *f){
    free(f);
}

void imprimirFuncionario(FUNCIONARIO *f){
    if(f != NULL){
        printf("Nome: %s\n", f->nome);
        printf("CPF: %s\n", f->CPF);
        printf("salario: %f\n", f->salario);
    }
}

void ajustarSalario(FUNCIONARIO *f, float percentual){
    if(f != NULL){
        f->salario = (f->salario)*percentual;
    }
}