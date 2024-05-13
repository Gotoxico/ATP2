//4) Fa�a uma fun��o que considere um arquivo bin�rio com n�meros inteiros ordenados em ordem crescente, elabore uma fun��o para verificar se uma chave (n�mero inteiro) est� contida no arquivo utilizando a t�cnica de Busca Bin�ria para trabalhar sobre um arquivo bin�rio. As fun��es fseek() e ftell() podem ser interessantes para auxiliar nessa implementa��o. OBS: A busca deve ser feita diretamente manipulando registros em um arquivo bin�rio e n�o em um vetor. DICA: A Busca Bin�ria pode ser implementada de forma iterativa.

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