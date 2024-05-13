#include "Cubo.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

CUBO* criarCubo(float aresta){
    CUBO *c = (CUBO*) malloc(sizeof(CUBO));
    if(c != NULL){
        c->aresta = aresta;
    }
    return c;
}

void destruirCubo(CUBO *c){
    free(c);
}

void imprimirCubo(CUBO *c){
    for(int i=0; i<6; i++){
        printf("Aresta %d: %f\n", i+1, c->aresta);
    }
}

void atribuirCubo(CUBO *c, float aresta){
    if(c != NULL){
        c->aresta = aresta;
    }
}

void areaCubo(CUBO *c){
    if(c != NULL){
        float area = 6 * c->aresta * c->aresta;
        printf("Area: %fu^2\n", area);
    }
}

void volumeCubo(CUBO *c){
    if(c != NULL){
        float volume = c->aresta * c->aresta * c->aresta;
        printf("Volume: %fu^3\n", volume);
    }
}