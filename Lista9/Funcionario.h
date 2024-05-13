#ifndef FUNCIONARIO_
#define FUNCIONARIO_

typedef struct funcionario{
    char nome[100];
    char CPF[11];
    float salario;
}FUNCIONARIO;

FUNCIONARIO* criarFuncionario(const char *nome, const char *CPF, float salario);
void destruirFuncionario(FUNCIONARIO *f);
void imprimirFuncionario(FUNCIONARIO *f);
void ajustarSalario(FUNCIONARIO *f, float percentual);

#include "Funcionario.c"

#endif