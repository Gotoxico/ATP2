#ifndef CUBO_
#define CUBO_

typedef struct cubo{
    float aresta;
}CUBO;

CUBO* criarCubo(float aresta);
void destruirCubo(CUBO* c);
void imprimirCubo(CUBO* c);
void atribuirCubo(CUBO* c, float aresta);
void areaCubo(CUBO* c);
void volumeCubo(CUBO* c);

#include "Cubo.c"

#endif
