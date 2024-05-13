#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, reverso, tamanho;
    char nstring[10000];
    printf("Digite n: ");
    scanf("%d", &n);
    itoa(n, nstring, 10);
    tamanho=strlen(nstring);
    for(int i=tamanho; i>=0; i--){
        printf("%c", nstring[i]);
    }
    return 0;
}