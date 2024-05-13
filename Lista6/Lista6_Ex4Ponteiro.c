//4) Faça um programa que leia um vetor com dados de alguns livros. a. Endereço: Rua, Número, Bairro, Cidade e Estado b. Editora: nome, site, endereço c. Livro: título, autor, editora, número de páginas e ano de publicação. d. Procure um livro por autor, perguntando ao usuário qual autor deseja buscar. Mostre os dados de todos os livros escritos pelo autor buscado.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char string200[200];

typedef struct endereco{
    string200 rua;
    int numero;
    string200 bairro;
    string200 cidade;
    string200 estado;
}ENDERECO;

typedef struct editora{
    string200 nome;
    string200 site;
    ENDERECO endereco;
}EDITORA;

typedef struct livro{
    string200 titulo;
    string200 autor;
    EDITORA editora;
    int paginas;
    int publicacao;
}LIVRO;

//Ponteiro//
LIVRO colocar_dados(){
    LIVRO *livrinho = (LIVRO *)malloc(sizeof(LIVRO));
    printf("Titulo: \n");
    fgets(livrinho->titulo, sizeof(livrinho->titulo), stdin);

    printf("Autor: \n");
    fgets(livrinho->autor, sizeof(livrinho->autor), stdin);

    printf("Editora nome: \n");
    fgets(livrinho->editora.nome, sizeof(livrinho->editora.nome), stdin);

    printf("Editora site: \n");
    fgets(livrinho->editora.site, sizeof(livrinho->editora.site), stdin);

    printf("Editora rua: \n");
    fgets(livrinho->editora.endereco.rua, sizeof(livrinho->editora.endereco.rua), stdin);

    printf("Editora numero: \n");
    scanf("%d", &livrinho->editora.endereco.numero);

    fflush(stdin);

    printf("Editora bairro: \n");
    fgets(livrinho->editora.endereco.bairro, sizeof(livrinho->editora.endereco.bairro), stdin);

    printf("Editora cidade: \n");
    fgets(livrinho->editora.endereco.cidade, sizeof(livrinho->editora.endereco.cidade), stdin);

    printf("Editora estado: \n");
    fgets(livrinho->editora.endereco.estado, sizeof(livrinho->editora.endereco.estado), stdin);

    printf("Paginas: \n");
    scanf("%d", &livrinho->paginas);

    printf("Publicacao: \n");
    scanf("%d", &livrinho->publicacao);

    return *livrinho;
}

int main(){

    //Ponteiro//
    int i=0, num;
    string200 chave;
    printf("Digite numero de livros: ");
    scanf("%d", &num);
    LIVRO *livrinho = (LIVRO *)malloc(num * sizeof(LIVRO));
    while(i<num){
        livrinho[i]=colocar_dados();
        i++;
    }

    fflush(stdin);

    printf("Digite autor: ");
    fgets(chave, sizeof(chave), stdin);
    
    for(int j=0; j<num; j++){
        if(strcmp(chave, livrinho[j].autor)==0){
            printf("Titulo: %s", livrinho[j].titulo);
            printf("\nEditora: %s", livrinho[j].editora.nome);
            printf("\nSite: %s", livrinho[j].editora.site);
            printf("\nRua: %s", livrinho[j].editora.endereco.rua);
            printf("\nNumero: %d", livrinho[j].editora.endereco.numero);
            printf("\nBairro: %s", livrinho[j].editora.endereco.bairro);
            printf("\nCidade: %s", livrinho[j].editora.endereco.cidade);
            printf("\nEstado: %s", livrinho[j].editora.endereco.estado);
            printf("\nPaginas: %d", livrinho[j].paginas);
            printf("\nPublicacao: %d", livrinho[j].publicacao);
            printf("\n");
            
        }
    }
    free(livrinho);
    return 0;
}

