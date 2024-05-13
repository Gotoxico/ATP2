#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

int main(){
    CUBO *c1, *c2;
    c1 = criarCubo(5);
    c2 = criarCubo(1.3);

    imprimirCubo(c1);
    imprimirCubo(c2);

    areaCubo(c2);
    volumeCubo(c2);

    atribuirCubo(c2, 8.1);
    imprimirCubo(c2);

    areaCubo(c1);
    areaCubo(c2);

    volumeCubo(c1);
    volumeCubo(c2);

    return 0;
}