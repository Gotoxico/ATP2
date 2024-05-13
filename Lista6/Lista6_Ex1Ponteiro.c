//1) Implemente um algoritmo que registre cartas de um jogo de baralho em Struct, Enum e Typedef, para isso utilize as seguintes descrições: a. Raridade: Comum, Rara, Super e Ultra b. Tipo: Personagem, Magia e Armadilha c. Carta: Nome, Raridade, Efeito da carta.//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum raridade {
    Comum, Rara, Super, Ultra
}RARIDADE;

typedef char string100[100];

typedef enum tipo {
    Personagem, Magia, Armadilha
}TIPO;

typedef enum efeito {
    zero, um, dois, tres, quatro, cinco
}EFEITO;

typedef struct carta{
    string100 name;
    RARIDADE rarity;
    EFEITO effect;
    TIPO type;
}CARTA;

int main(){
    //Ponteiro//
    CARTA carta1;
    CARTA *ptD = &carta1;
    strcpy(ptD->name, "Druida Vermelho");
    ptD->rarity = 1;
    ptD->effect = 0;
    ptD->type = 0;

    printf("Nome: %s\nRaridade: %d\nEfeito: %d\nTipo: %d", ptD->name, ptD->rarity, ptD->effect, ptD->type);
    return 0;
}
