//Algoritmo bubble sort melhorado com erros//

void algoA(int *a, int b){
    int i, j, c, d;
    for (i = 1; i < b; i++){
    d = -1;
        for (j = 0; j < b-1; j++){
        if (*(a+j) > *(a+j+1)){
            c = *(a+j);
            *(a+j) = *(a+i);
            *(a+i) = c;
            }
        }
    if(d == -1) return;
    }
return;
}

//Algoritmo bubble sort melhorado consertado//

void BubbleSortMelhorado(int *a, int b){
    int i, j, c, d;
    for (i = 1; i < b; i++){
    d = -1;
        for (j = 0; j < b-1; j++){
        if (*(a+j) > *(a+j+1)){
            c = *(a+j);
            *(a+j) = *(a+i);
            *(a+i) = c;
            d =0;
            }
        }
    if(d != -1) return;
    }
return;
}
