//1) Implemente um algoritmo que registre cartas de um jogo de baralho em Struct, Enum e Typedef, para isso utilize as seguintes descrições: a. Raridade: Comum, Rara, Super e Ultra b. Tipo: Personagem, Magia e Armadilha c. Carta: Nome, Raridade, Efeito da carta. Armazenando Struct em Arquivo Binário//

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

void inserirCartasVetor(CARTA cartas[], int n){
    for(int i=0; i<n; i++){
        printf("Nome da carta: ");
        fflush(stdin);
        gets(cartas[i].name);
        printf("Raridade da carta: ");
        scanf("%u", &cartas[i].rarity);
        printf("Efeito da carta: ");
        scanf("%u", &cartas[i].effect);
        printf("Tipo da carta: ");
        scanf("%u", &cartas[i].type);
    }
    return;
}

void imprimirCartasVetor(CARTA cartas[], int n){
    printf("\nCartas:\n");
    for(int i=0; i<n; i++){
        printf("Nome da carta: %s\n", cartas[i].name);
        printf("Raridade da carta: %d\n", cartas[i].rarity);
        printf("Efeito da carta: %d\n", cartas[i].effect);
        printf("Tipo da carta: %d\n", cartas[i].type);
    }
    return;
}

void escreverCartasArquivoBinario(CARTA cartas[], int n){
    FILE *file;
    file = fopen("Lista_Ex1.dat", "wb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fwrite(cartas, sizeof(CARTA), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}
    


void lerCartasArquivoBinario(CARTA cartaslidas[], int n){
    FILE *file;
    file = fopen("Lista_Ex1.dat", "rb");
    if(file != NULL){
        for(int i=0; i<n; i++){
            fread(cartaslidas, sizeof(CARTA), n, file);
        }
        fclose(file);
    }
    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

int main(){
    int n;
    printf("Digite quantidade de cartas: ");
    scanf("%d", &n);

    CARTA cartas[n];
    inserirCartasVetor(cartas, n);
    escreverCartasArquivoBinario(cartas, n);

    CARTA cartaslidas[n];

    lerCartasArquivoBinario(cartaslidas, n);
    imprimirCartasVetor(cartaslidas, n);

    return 0;
}