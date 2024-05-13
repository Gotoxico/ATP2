#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Aluno.h"

int main(){
    LISTA *lista;
    lista = criarLista();

    inserirInicio(lista, "Amadeu", 9);
    inserirOrdenado(lista, "Paulo", 6);
    inserirOrdenado(lista, "Paula", 7);
    consultaAlunoEspecifico(lista, "Amanda");
    percurso(lista);

    





    return 0;
}