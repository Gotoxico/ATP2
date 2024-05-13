//Implemente o algoritmo Qucik Sort: a) Implementação com pivô escolhido como elemento central (meio).//
#include <stdio.h>
int particao(int *vetor, int esquerda, int direita){
	int meio = (esquerda+direita)/2;
	int pivo = *(vetor+meio), i = esquerda, j = direita, auxTroca;

	while(i <= j) {									    //Para o particionamento quando o lado esquerdo e direito se cruzarem.

		if(*(vetor+i) <= pivo) ++i;						//Avança a posição referente ao lado esquerdo.
		else if(pivo < *(vetor+j)) --j;					//Retrocede a posição referente ao lado direito.

		else{
			auxTroca = *(vetor+i);						//Troca os elementos de possição.
			*(vetor+i) = *(vetor+j);					//Troca os elementos de possição.
			*(vetor+j) = auxTroca;						//Troca os elementos de possição.
			++i, --j;
		}//Fim else
	}//Fim while

	*(vetor+meio) = *(vetor+j);
	*(vetor+j) = pivo;
	return j;										    //Retornando o valor de j.
}

void quickSort(int *vetor, int esquerda, int direita){

	if(esquerda < direita){						        //Para as chamadas recursivas quando o lado esquerdo e direito se cruzarem.
		int meio = particao(vetor,esquerda,direita);    //Particiona o vetor em duas partes utilizando pivo no inicio
		quickSort(vetor,esquerda,meio-1);			    //Aplica o Quick Sort na partição esquerda.
		quickSort(vetor,meio+1,direita);				//Aplica o Quick Sort na partição direita.
	}
	return;
}

void InserirVetor(int *vetor, int n){
	for(int i=0; i<n; i++){
		printf("Digite elemento %d: ", i+1);
		scanf("%d", &*(vetor+i));
	}
}

//Espaço//

int main(){
	int n;
	printf("Digite n: ");
	scanf("%d", &n);
	int vetor[n];
	InserirVetor(&vetor[0], n);
	quickSort(&vetor[0], 0, n);
	for(int i=0; i<n; i++){
		printf("Elemento %d: %d\n", i+1, *(vetor+i));
	}
	return 0;
}
