//3) Considere uma struct Produto que possui nome, descri��o, pre�o e data de vencimento, na qual data de vencimento � uma struct que possui dia, m�s e ano. Fa�a um algoritmo que possibilite gravar em um arquivo bin�rio n Produtos inseridos pelo usu�rio. Por fim, crie fun��es que permitam ler o arquivo bin�rio de Produtos e:
//a) Liste todos os produtos registrados no arquivo.
//b) Liste todos os produtos com pre�o maior que um pre�o informado pelo usu�rio.
//c) Liste todos os produtos presente no arquivo bin�rio que est�o vencidos, considere a data de hoje (pode ser informada pelo usu�rio).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}DATA;

typedef struct {
    char nome[100];
    char descricao[200];
    float preco;
    DATA data;
}PRODUTO;

void escreverProdutoArquivoBinario(){
    FILE *file;
    file = fopen("Lista8_Ex3.dat", "ab");

    PRODUTO produto[1];
    for(int i=0; i<1; i++){
        printf("Digite nome: ");
        fflush(stdin);
        gets(produto[i].nome);

        printf("Digite descricao: ");
        fflush(stdin);
        gets(produto[i].descricao);

        printf("Digite preco: ");
        scanf("%f", &produto[i].preco);

        printf("Digite dia: ");
        scanf("%d", &produto[i].data.dia);

        printf("Digite mes: ");
        scanf("%d", &produto[i].data.mes);

        printf("Digite ano: ");
        scanf("%d", &produto[i].data.ano);
    }

    fwrite(produto, sizeof(PRODUTO), 1, file);

    fclose(file);

    return;
}

void listarProdutos(){
    FILE *file;
    file = fopen("Lista8_Ex3.dat", "rb");
    
    if(file != NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeProdutos = ftell(file)/sizeof(PRODUTO);
        fseek(file, 0, SEEK_SET);

        PRODUTO produtos[quantidadeProdutos];

        fread(produtos, sizeof(PRODUTO), quantidadeProdutos, file);

        for(int i=0; i<quantidadeProdutos; i++){
            printf("Nome: %s\n", produtos[i].nome);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Preco: %f\n", produtos[i].preco);
            printf("Dia: %d\n", produtos[i].data.dia);
            printf("Mes: %d\n", produtos[i].data.mes);
            printf("Ano: %d\n", produtos[i].data.ano);
        }

        fclose(file);
    }
    return;
}

void listarProdutosPrecoMaiorQue(float chave){
    FILE *file;
    file = fopen("Lista8_Ex3.dat", "rb");
    
    if(file != NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeProdutos = ftell(file)/sizeof(PRODUTO);
        fseek(file, 0, SEEK_SET);

        PRODUTO produtos[quantidadeProdutos];

        fread(produtos, sizeof(PRODUTO), quantidadeProdutos, file);

        for(int i=0; i<quantidadeProdutos; i++){
            if(produtos[i].preco>chave){
                printf("Nome: %s\n", produtos[i].nome);
                printf("Descricao: %s\n", produtos[i].descricao);
                printf("Preco: %f\n", produtos[i].preco);
                printf("Dia: %d\n", produtos[i].data.dia);
                printf("Mes: %d\n", produtos[i].data.mes);
                printf("Ano: %d\n", produtos[i].data.ano);
            }
        }

        fclose(file);
    }
    return;
}

void listarProdutosValidade(int day, int month, int year){
    FILE *file;
    file = fopen("Lista8_Ex3.dat", "rb");
    
    if(file != NULL){
        fseek(file, 0, SEEK_END);
        int quantidadeProdutos = ftell(file)/sizeof(PRODUTO);
        fseek(file, 0, SEEK_SET);

        PRODUTO produtos[quantidadeProdutos];

        fread(produtos, sizeof(PRODUTO), quantidadeProdutos, file);

        for(int i=0; i<quantidadeProdutos; i++){
            if(produtos[i].data.dia>day && produtos[i].data.mes>month && produtos[i].data.ano>year){
                printf("Nome: %s\n", produtos[i].nome);
                printf("Descricao: %s\n", produtos[i].descricao);
                printf("Preco: %f\n", produtos[i].preco);
                printf("Dia: %d\n", produtos[i].data.dia);
                printf("Mes: %d\n", produtos[i].data.mes);
                printf("Ano: %d\n", produtos[i].data.ano);
            }
        }

        fclose(file);
    }
    return;
}

int main(){
    int opcao, dia, mes, ano;
    float chave;
    do{
        printf("Menu para manipulacao de arquivo binario\n");
        printf("1 - Escrever produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Listar produtos com preco maior que\n");
        printf("4 - Listar produtos vencidos\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                escreverProdutoArquivoBinario();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                printf("Digite preco base: ");
                scanf("%f", &chave);
                listarProdutosPrecoMaiorQue(chave);
                break;
            case 4:
                printf("Digite dia: ");
                scanf("%d", &dia);
                printf("Digite mes: ");
                scanf("%d", &mes);
                printf("Digite ano: ");
                scanf("%d", &ano);
                listarProdutosValidade(dia, mes, ano);
                break;
            case 5:
                printf("Saiu!\n");
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }while(opcao!=5);

    return 0;

}