//4) Faça uma função que considere um arquivo binário com números inteiros ordenados em ordem crescente, elabore uma função para verificar se uma chave (número inteiro) está contida no arquivo utilizando a técnica de Busca Binária para trabalhar sobre um arquivo binário. As funções fseek() e ftell() podem ser interessantes para auxiliar nessa implementação. OBS: A busca deve ser feita diretamente manipulando registros em um arquivo binário e não em um vetor. DICA: A Busca Binária pode ser implementada de forma iterativa.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int inteiro;
}INTEIRO;

void escreverInteirosArquivoBinario(int num){
    FILE *file;
    file = fopen("Lista8_Ex4.dat", "wb");

    INTEIRO inteiros[num];
    for(int i=0; i<num; i++){
        printf("Digite inteiro: ");
        scanf("%d", &inteiros[i].inteiro);
    }

    fwrite(inteiros, sizeof(INTEIRO), num, file);
    fclose(file);
    return;
}

void buscaBinariaArquivoBinario(int chave){
    FILE *file;
    file = fopen("Lista8_Ex4.dat", "rb");

    INTEIRO inteiro;

    if(file != NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeInteiros = ftell(file)/sizeof(INTEIRO);
        fseek(file, 0, SEEK_SET);

        int inicio = 0, fim = quantidadeInteiros-1;

        while(inicio<=fim){
            fseek(file, ((inicio+fim)/2)*sizeof(INTEIRO), SEEK_SET);
            fread(&inteiro, sizeof(INTEIRO), 1, file);
            if(inteiro.inteiro==chave){
                printf("Inteiro encontrado!");
                fclose(file);
                return;
            }
            else{
                if(inteiro.inteiro>chave){
                    fim = ((inicio+fim)/2)-1;
                }
                else{
                    inicio = ((inicio+fim)/2)+1;
                }
            }
        }

        printf("Inteiro nao encontrado");

        fclose(file);
    }

    else{
        printf("Arquivo nao aberto!");
    }
    return;
}

int main(){
    int num, chave;

    

    printf("Digite chave: ");
    scanf("%d", &chave);
    buscaBinariaArquivoBinario(chave);
    system("pause");

    return 0;
}