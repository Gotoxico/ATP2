//6) Implemente uma Struct representando um Atleta profissional de E-Sports. Um atleta possui nome, gênero, data de nascimento, equipe em que ele está vinculado, categoria de jogo no qual ele atua (Exemplo: CSGO, LoL, entre outros) e salário.//
//Sua implementação deve possuir um menu que permita://
//a. Inserir alguns atletas de E-Sports em um Vetor.//
//b. Mostrar todos os atletas.//
//c. Encontrar e mostrar os atletas vinculados à uma determinada equipe.//
//d. Mostrar os atletas em ordem de salário, ou seja, do atleta mais bem pago até o menos pago.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char string100[100];

typedef struct atleta{
    string100 nome;
    string100 genero;
    string100 nascimento;
    string100 equipe;
    string100 jogo;
    float salario;
}ATLETA;

//Ponteiro//
ATLETA colocar_dados(){
    ATLETA *atletinha = (ATLETA*)malloc(sizeof(ATLETA));

    printf("Nome: ");
    fgets(atletinha->nome, sizeof(atletinha->nome), stdin);
    atletinha->nome[strcspn(atletinha->nome, "\n")] = '\0';

    printf("Genero: ");
    fgets(atletinha->genero, sizeof(atletinha->genero), stdin);
    atletinha->genero[strcspn(atletinha->genero, "\n")] = '\0';

    printf("Nascimento: ");
    fgets(atletinha->nascimento, sizeof(atletinha->nascimento), stdin);
    atletinha->nascimento[strcspn(atletinha->nascimento, "\n")] = '\0';

    printf("Equipe: ");
    fgets(atletinha->equipe, sizeof(atletinha->equipe), stdin);
    atletinha->equipe[strcspn(atletinha->equipe, "\n")] = '\0';

    printf("Jogo: ");
    fgets(atletinha->jogo, sizeof(atletinha->jogo), stdin);
    atletinha->jogo[strcspn(atletinha->jogo, "\n")] = '\0';

    printf("Salario: ");
    scanf("%f", &atletinha->salario);
    getchar();

    return *atletinha;

}

int main(){
    //Ponteiro//
    int i=0, num, opcao;
    ATLETA *atletinha = (ATLETA*)malloc(sizeof(ATLETA));
    do{
        printf("1) Inserir alguns atletas de E-Sports em um Vetor\n2) Mostrar todos os atletas\n3) Encontrar e mostrar os atletas vinculados a uma determinada equipe\n4) Mostrar os atletas em ordem de salario, ou seja, do atleta mais bem pago ate o menos pago\n5) Sair\nDigite uma opcao: ");
        scanf("%d", &opcao);

        if(opcao==1){
            printf("Digite numero de atletas inserir vetor: ");
            scanf("%d", &num);
            getchar();
            while(i<num){
                atletinha[i]=colocar_dados();
                i++;
            }
        }

        if(opcao==2){
            for(int j=0; j<num; j++){
                printf("Nome: %s", atletinha[j].nome);
                printf("\nGenero: %s", atletinha[j].genero);
                printf("\nData nascimento: %s", atletinha[j].nascimento);
                printf("\nEquipe: %s", atletinha[j].equipe);
                printf("\nJogo: %s", atletinha[j].jogo);
                printf("\nSalario: %f\n", atletinha[j].salario);
            }
        }

        if(opcao==3){
            string100 equipe;
            getchar();
            printf("Digite equipe: ");
            fgets(equipe, sizeof(equipe), stdin);
            equipe[strcspn(equipe, "\n")] = '\0';
            for(int a=0; a<num; a++){
                if(strcmp(atletinha[a].equipe, equipe)==0){
                    printf("\nNome: %s", atletinha[a].nome);
                }
            }
        }

        if(opcao==4){
            ATLETA aux;
            for(int b=1; b<num; b++){
                for(int c=0; c<num-1; c++){
                    if(atletinha[c].salario<atletinha[c+1].salario){
                        aux=atletinha[c];
                        atletinha[c]=atletinha[c+1];
                        atletinha[c+1]=aux;
                    }
                }
            }
            for(int d=0; d<num; d++){
                printf("\nNome: %s e Salario: %f", atletinha[d].nome, atletinha[d].salario);
            }
        }

    }while(opcao!=5);
    free(atletinha);
    return 0;
}