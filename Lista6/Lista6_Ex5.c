//5) Implemente uma Struct representando Aluno de uma determinada disciplina. Um aluno possui RA, nome, data de nascimento, email, nota da primeira prova, nota da segunda prova, nota do trabalho. Sua implementação deve possuir um menu que permita://
//a. Inserir alguns alunos em um Vetor de alunos.//
//b. Mostrar todos os alunos.//
//c. Encontrar e mostrar o aluno que possui a maior nota da primeira prova.//
//d. Encontrar e mostrar o aluno com maior média na disciplina.//
//e. Encontrar e mostrar os alunos aprovados.//
//f. Encontrar e mostrar os alunos reprovados.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char string100[100];

typedef struct aluno{
    int ra;
    string100 nome;
    int nascimento;
    string100 email;
    float p1;
    float p2;
    float trabalho;
}ALUNO;

//Indexado//
ALUNO colocar_dados(){
    ALUNO materiaX;
    printf("RA: ");
    scanf("%d", &materiaX.ra);

    fflush(stdin);
    printf("Nome: ");
    gets(materiaX.nome);

    printf("Data nascimento(Sem /): ");
    scanf("%d", &materiaX.nascimento);

    fflush(stdin);
    printf("Email: ");
    gets(materiaX.email);

    printf("Nota P1: ");
    scanf("%f", &materiaX.p1);

    printf("Nota P2: ");
    scanf("%f", &materiaX.p2);

    printf("Nota trabalho: ");
    scanf("%f", &materiaX.trabalho);

    return(materiaX);
}

//Ponteiro//
ALUNO colocar_dados(){
    ALUNO *materiaX = (ALUNO*)malloc(sizeof(ALUNO));
    printf("RA: ");
    scanf("%d", &materiaX->ra);

    fflush(stdin);
    printf("Nome: ");
    gets(materiaX->nome);

    printf("Data nascimento(Sem /): ");
    scanf("%d", &materiaX->nascimento);

    fflush(stdin);
    printf("Email: ");
    gets(materiaX->email);

    printf("Nota P1: ");
    scanf("%f", &materiaX->p1);

    printf("Nota P2: ");
    scanf("%f", &materiaX->p2);

    printf("Nota trabalho: ");
    scanf("%f", &materiaX->trabalho);

    return *materiaX;
}

int main(){
    //Indexado//
    int i=0, num, opcao;
    ALUNO materiaX[100];
    do{
        printf("1) Inserir alguns alunos em um Vetor de alunos \n2) Mostrar todos os alunos \n3) Encontrar e mostrar o aluno que possui a maior nota da primeira prova \n4) Encontrar e mostrar o aluno com maior media na disciplina \n5) Encontrar e mostrar os alunos aprovados \n6) Encontrar e mostrar os alunos reprovados \n7) Sair \nDigite opcao: ");
        scanf("%d", &opcao);
        if(opcao==1){
            printf("Digite numero de alunos para colocar no vetor: ");
            scanf("%d", &num);
            while(i<num){
                materiaX[i]=colocar_dados();
                i++;
            }
        }

        if(opcao==2){
            for(int j=0; j<num; j++){
                printf("RA: %d", materiaX[j].ra);
                printf("\nNome: %s", materiaX[j].nome);
                printf("\nData nascimento: %d", materiaX[j].nascimento);
                printf("\nEmail: %s", materiaX[j].email);
                printf("\nNota P1: %f", materiaX[j].p1);
                printf("\nNota P2: %f", materiaX[j].p2);
                printf("\nNota trabalho: %f", materiaX[j].trabalho);
                printf("\n");
            }
        }

        if(opcao==3){
            float maiorP1 = 0;
            for(int a=0; a<num; a++){
                if(materiaX[a].p1>maiorP1){
                    maiorP1=materiaX[a].p1;
                }
            }
            printf("Maior nota P1: %f\n", maiorP1);
        }

        if(opcao==4){
            float maiorMedia = 0;
            for(int b=0; b<num; b++){
                if(((materiaX[b].p1+materiaX[b].p2+materiaX[b].trabalho)/3)>maiorMedia){
                    maiorMedia=(materiaX[b].p1+materiaX[b].p2+materiaX[b].trabalho)/3;
                }
            }
            printf("Maior media: %f\n", maiorMedia);
        }

        if(opcao==5){
            for(int c=0; c<num; c++){
                if(((materiaX[c].p1+materiaX[c].p2+materiaX[c].trabalho)/3)>=5){
                    printf("Aluno %s aprovado media: %f\n", materiaX[c].nome, (materiaX[c].p1+materiaX[c].p2+materiaX[c].trabalho)/3);
                }
            }
        }

        if(opcao==6){
            for(int d=0; d<num; d++){
                if(((materiaX[d].p1+materiaX[d].p2+materiaX[d].trabalho)/3)<5){
                    printf("Aluno %s reprovado media: %f\n", materiaX[d].nome, (materiaX[d].p1+materiaX[d].p2+materiaX[d].trabalho)/3);
                }
            }
        }

    }while(opcao!=7);

    //Ponteiro//
    int i=0, num, opcao;
    ALUNO *materiaX = (ALUNO*)malloc(sizeof(ALUNO));
    do{
        printf("1) Inserir alguns alunos em um Vetor de alunos \n2) Mostrar todos os alunos \n3) Encontrar e mostrar o aluno que possui a maior nota da primeira prova \n4) Encontrar e mostrar o aluno com maior media na disciplina \n5) Encontrar e mostrar os alunos aprovados \n6) Encontrar e mostrar os alunos reprovados \n7) Sair \nDigite opcao: ");
        scanf("%d", &opcao);
        if(opcao==1){
            printf("Digite numero de alunos para colocar no vetor: ");
            scanf("%d", &num);
            while(i<num){
                materiaX[i]=colocar_dados();
                i++;
            }
        }

        if(opcao==2){
            for(int j=0; j<num; j++){
                printf("RA: %d", materiaX[j].ra);
                printf("\nNome: %s", materiaX[j].nome);
                printf("\nData nascimento: %d", materiaX[j].nascimento);
                printf("\nEmail: %s", materiaX[j].email);
                printf("\nNota P1: %f", materiaX[j].p1);
                printf("\nNota P2: %f", materiaX[j].p2);
                printf("\nNota trabalho: %f", materiaX[j].trabalho);
                printf("\n");
            }
        }

        if(opcao==3){
            float maiorP1 = 0;
            for(int a=0; a<num; a++){
                if(materiaX[a].p1>maiorP1){
                    maiorP1=materiaX[a].p1;
                }
            }
            printf("Maior nota P1: %f\n", maiorP1);
        }

        if(opcao==4){
            float maiorMedia = 0;
            for(int b=0; b<num; b++){
                if(((materiaX[b].p1+materiaX[b].p2+materiaX[b].trabalho)/3)>maiorMedia){
                    maiorMedia=(materiaX[b].p1+materiaX[b].p2+materiaX[b].trabalho)/3;
                }
            }
            printf("Maior media: %f\n", maiorMedia);
        }

        if(opcao==5){
            for(int c=0; c<num; c++){
                if(((materiaX[c].p1+materiaX[c].p2+materiaX[c].trabalho)/3)>=5){
                    printf("Aluno %s aprovado media: %f\n", materiaX[c].nome, (materiaX[c].p1+materiaX[c].p2+materiaX[c].trabalho)/3);
                }
            }
        }

        if(opcao==6){
            for(int d=0; d<num; d++){
                if(((materiaX[d].p1+materiaX[d].p2+materiaX[d].trabalho)/3)<5){
                    printf("Aluno %s reprovado media: %f\n", materiaX[d].nome, (materiaX[d].p1+materiaX[d].p2+materiaX[d].trabalho)/3);
                }
            }
        }

    }while(opcao!=7);
    free(materiaX);
    return 0;
}