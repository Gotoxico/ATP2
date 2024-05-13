#ifndef ALUNO_
#define ALUNO_

typedef struct no{
    char nome[100];
    float media;
    struct no *prox;
}NO;

typedef struct lista{
    struct no *inicio;
}LISTA;

LISTA* criarLista();
NO* criarNo(const char *nome, float media);
int estaVazia(LISTA *lista);
void inserirInicio(LISTA *lista, const char *nome, float media);
void inserirFinal(LISTA *lista, const char *nome, float media);
void inserirOrdenado(LISTA *lista, const char *nome, float media);
void removerInicio(LISTA *lista);
void removerFinal(LISTA *lista);
void removerAlunoEspecifico(LISTA *lista, const char *chave);
void consultaAlunoEspecifico(LISTA *lista, const char *chave);
void percurso(LISTA *lista);

#include "Aluno.c"

#endif