#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funcionario.h"

int main(){
    FUNCIONARIO *f1, *f2;
    f1 = criarFuncionario("Alberto Soares", "12345678910", 1985.10);
    f2 = criarFuncionario("Marilia Alves", "01987654321", 4568.34);

    imprimirFuncionario(f1);
    imprimirFuncionario(f2);

    ajustarSalario(f1, 2.15);
    imprimirFuncionario(f1);

    destruirFuncionario(f1);

    return 0;
}