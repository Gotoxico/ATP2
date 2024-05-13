#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, flag=1;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int meio=(n+1)/2;
    int metade1[meio], metade2[meio], metade2invertido[meio];
    for(int i=0; i<meio; i++){
        metade1[i]=vetor[i];
    }
    for(int i=meio; i<n; i++){
        metade2[i-meio]=vetor[i];
    }
    for(int i=meio-1, j=0; i>=0; i--, j++){
        metade2invertido[j]=metade2[i];
    }
    for(int i = 0; i < meio; i++) {
        if (metade1[i] != metade2invertido[i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("A sequencia inserida forma um numero palindromo.\n");
    } else {
        printf("A sequencia inserida nao forma um numero palindromo.\n");
    }
    return 0;
}
