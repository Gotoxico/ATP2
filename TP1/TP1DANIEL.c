#include<stdio.h>
#include<locale.h>
void ordem(int a[],int n) { //função para ordenar os números
    int troca;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[i]<a[j]) {
                troca=a[i];
                a[i]=a[j];
                a[j]=troca;
            }
        }
    }
}

void verif_a(int vetor[],int n) {
    int x=0,busca;
    printf("\nInsira um elemento arbitrário: "); //verificar elemento arbitrário
    scanf("%d",&busca);
    for(int i=0;i<n;i++) {
        if(busca==vetor[i]) {
            x=1;
            break;
        }
    }
    x?printf("\nO número %d está no conjunto A\n",busca):printf("\nO número %d não está no conjunto A\n",busca);
}

void verif_b(int vetor[],int n) {
    int x=0,busca;
    printf("\nInsira um elemento arbitrário: "); //verificar elemento arbitrário
    scanf("%d",&busca);
    for(int i=0;i<n;i++) {
        if(busca==vetor[i]) {
            x=1;
            break;
        }
    }
    x?printf("\nO número %d está no conjunto B\n",busca):printf("\nO número %d não está no conjunto B\n",busca);
}

void uniao(int a[],int b[],int n,int m) {
    int tamanho=n+m,result[tamanho],troca;

    for(int i=0,j=0;i<tamanho;i++) {
        if(i<n) { //juntar os vetores
            result[i]=a[i];
        }else{
            result[i]=b[j];
            j++;
        }
    }

    for(int i=1;i<tamanho;i++) { //retirar números repetidos
        for(int j=0;j<i;j++) {
            if(result[j]==result[i]) {
                for(int k=i;k<tamanho;k++) {
                    result[k]=result[k+1];
                }
                i--;
                tamanho--;
            }
        }
    }

    for(int i=0;i<tamanho;i++) { //ordenar os números
        for(int j=0;j<i;j++) {
            if(result[i]<result[j]) {
                troca=result[i];
                result[i]=result[j];
                result[j]=troca;
            }
        }
    }

    for(int i=0;i<tamanho;i++) { //printar o resultado
        if(i==0) {
            printf("\nUnião A e B: [");
        }
        i==tamanho-1?printf("%d]\n",result[i]):printf("%d,",result[i]);
    }
}

void interseccao(int a[],int b[],int n,int m) {
    int cont=0,result[m+n];
    for(int i=0;i<n;i++) { //armazenar intersecção a e b
        for(int j=0;j<m;j++) {
            if(a[i]==b[j]) {
                result[cont]=a[i];
                cont++;
            }
        }
    }
    for(int i=0;i<cont;i++) { //printar o resultado
        if(i==0) {
            printf("\nIntersecção A e B: [");
        }
        i==cont-1?printf("%d]\n",result[i]):printf("%d,",result[i]);
    }
}

void dif_ab(int a[],int b[],int n,int m) {
    int result[n+m],troca,x,cont=0;
    for(int i=0;i<n;i++) { //armazenar diferença a-b
        for(int j=0;j<m;j++) {
            if(a[i]!=b[j]) {
                x=1;
            }else{
                x=0;
                break;
            }
        }
        if(x) {
            result[cont]=a[i];
            cont++;
        }
    }
    for(int i=0;i<cont;i++) {
        if(i==0) {
            printf("\nDiferença A - B: [");
        }
        i==cont-1?printf("%d]\n",result[i]):printf("%d,",result[i]);
    }
}

void dif_ba(int a[],int b[],int n,int m) {
    int result[n+m],troca,x,cont=0;
    for(int i=0;i<m;i++) { //armazenar diferença b-a
        for(int j=0;j<n;j++) {
            if(a[j]!=b[i]) {
                x=1;
            }else{
                x=0;
                break;
            }
        }
        if(x) {
            result[cont]=b[i];
            cont++;
        }
    }
    for(int i=0;i<cont;i++) {
        if(i==0) {
            printf("\nDiferença B - A: [");
        }
        i==cont-1?printf("%d]\n",result[i]):printf("%d,",result[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n,m,op,troca,rep_a=0,rep_b=0;
    printf("Insira um n inteiro positivo: "); //armazenar n
    scanf("%d",&n);
    printf("Insira um m inteiro positivo: "); //armazenar m
    scanf("%d",&m);
    printf("\n");

    int a[n],b[m],conjr[n+m];
    for(int i=0;i<n;i++) { //loop conjunto A
        printf("Insira o %dº número do conjunto A: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++) { //loop conjunto B
        printf("Insira o %dº número do conjunto B: ",i+1);
        scanf("%d",&b[i]);
    }

    ordem(a,n); //ordenar os vetores
    ordem(b,m);

    for(int i=0;i<n;i++) { //printar conjunto A
        if(i==0) {
            printf("\nConjunto A: [");
        }
        i==n-1?printf("%d]\n",a[i]):printf("%d,",a[i]);
    }
    for(int i=0;i<m;i++) { //printar conjunto B
        if(i==0) {
            printf("Conjunto B: [");
        }
        i==m-1?printf("%d]\n",b[i]):printf("%d,",b[i]);
    }

    for(int i=0;i==0;) {
        printf("\nEscolha a operação:\n"); //menu
        printf("1 - União entre A e B\n");
        printf("2 - Intersecção entre A e B\n");
        printf("3 - Diferença, A menos B\n");
        printf("4 - Diferença, B menos A\n");
        printf("5 - Verificar se um elemento arbitrário está no conjunto A\n");
        printf("6 - Verificar se um elemento arbitrário está no conjunto B\n");
        printf("7 - Sair\n\n");
        scanf("%d",&op);

        switch(op) {
                case 1:
                    uniao(a,b,n,m);
                    break;
                case 2:
                    interseccao(a,b,n,m);
                    break;
                case 3:
                    dif_ab(a,b,n,m);
                    break;
                case 4:
                    dif_ba(a,b,n,m);
                    break;
                case 5:
                    verif_a(a,n);
                    break;
                case 6:
                    verif_b(b,m);
                    break;
                case 7:
                    i=1;
                    break;
                default:
                    printf("\nInsira um comando válido\n");
        }
    }
    return 0;
}