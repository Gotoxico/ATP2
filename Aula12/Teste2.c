#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    float notas[n];
    for(int i=0; i<n; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    FILE *file;
    file = fopen("notas.dat", "wb");

    if(file == NULL){
        printf("O arquivo não foi aberto!");
        return(1);
    }

    int qtsRegEscritos = fwrite(notas, sizeof(float), n, file);
    printf("Foram escritos %d registros de notas!\n\n", qtsRegEscritos);

    int qtsRegLidos = fread(notas, sizeof(float), n, file);
    printf("Foram lidos %d registros de notas!\n\n", qtsRegLidos);

    for(int i=0; i<n; i++){
        printf("Nota %d: %f\n", i+1, notas[i]);
    }

    fclose(file);
    return 0;
}
