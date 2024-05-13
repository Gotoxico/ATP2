#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"

LISTA* criarLista(){
    LISTA* lista = (LISTA*) malloc(sizeof(LISTA));
    lista->inicio = NULL;
    return(lista);
}

NO* criarNo(const char *nome, float media){
    NO *novoNo = (NO*) malloc(sizeof(NO));
        strcpy(novoNo->nome, nome);
        novoNo->media = media;

    return(novoNo);
}

int estaVazia(LISTA *lista){
    if(lista->inicio == NULL){
        return(1);
    }
    else{
        return(0);
    }
}

void inserirInicio(LISTA *lista, const char *nome, float media){
    NO *novoNo;
    novoNo = criarNo(nome, media);

    if(estaVazia(lista)==1){
        lista->inicio = novoNo;
    }
    else{
        novoNo->prox = lista->inicio;
        lista->inicio = novoNo;
    }
}

void inserirFinal(LISTA *lista, const char *nome, float media){
    NO *novoNo;
    novoNo = criarNo(nome, media);

    if(estaVazia(lista)==1){
        lista->inicio = novoNo;
    }
    else{
        NO *temp = lista->inicio;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = novoNo;
    }
}

void inserirOrdenado(LISTA *lista, const char *nome, float media){
    NO* novoNo;
    novoNo = criarNo(nome, media);

    if(estaVazia(lista)==1 || novoNo->media > lista->inicio->media){
        novoNo->prox = lista->inicio;
        lista->inicio = novoNo;
    }
    else{
        NO *temp = lista->inicio;
        NO *anterior = NULL;

        while(temp != NULL && novoNo->media <= temp->media){
            anterior = temp;
            temp = temp->prox;
        }

        anterior->prox = novoNo;
        novoNo->prox = temp;
    }
}

void removerInicio(LISTA *lista){
    if(estaVazia(lista)==1){
        printf("Lista vazia!");
        return;
    }
    else{
        NO *temp = lista->inicio;
        lista->inicio = lista->inicio->prox;
        free(temp);
    }
}

void removerFinal(LISTA *lista){
    if(estaVazia(lista)==1){
        printf("Lista vazia!");
        return;
    }
    else{
        NO *temp = lista->inicio;
        NO *anterior = NULL;
        while(temp->prox != NULL){
            anterior = temp;
            temp = temp->prox;
        }
        if(anterior == NULL){
            free(temp);
            lista->inicio = NULL;
        }
        else{
            anterior->prox = NULL;
            free(temp);
        }
    }
}

void removerAlunoEspecifico(LISTA *lista, const char *chave){
    if(estaVazia(lista)==1){
        printf("Lista vazia!");
        return;
    }
    else{
        NO *temp = lista->inicio;
        NO *anterior = NULL;
        while(temp != NULL && strcmp(temp->nome, chave)!=0){
            anterior = temp;
            temp = temp->prox;
        }

        if(temp == NULL){
            printf("Aluno nao encontrado!");
            return;
        }

        else{
            if(anterior == NULL){
                lista->inicio = temp->prox;
            }
            else{
                anterior->prox = temp->prox;
            }
        }
    }
}

void consultaAlunoEspecifico(LISTA *lista, const char *chave){
    if(estaVazia(lista)==1){
        printf("Lista vazia!");
        return;
    }
    else{
        NO *temp = lista->inicio;
        while (temp != NULL){
            if(strcmp(temp->nome, chave)==0){
                printf("Encontrado!");
                return;
            }
            else{
                temp = temp->prox;
            }
        }
        printf("Nao encontrado!");
    }
}

void percurso(LISTA *lista){
    if(estaVazia(lista)==1){
        printf("Lista vazia!");
        return;
    }
    else{
        NO *temp = lista->inicio;
        while(temp->prox != NULL){
            printf("Nome: %s\n", temp->nome);
            printf("Media: %f\n", temp->media);
            temp = temp->prox;
        }
    }
}


