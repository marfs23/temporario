#include <stdio.h>

//Algoritmo de Ordenação por Inserção
//https://github.com/giovanebarcelos/EDJava/blob/master/src/Ordenacao_2/Ordenacoes.java
void insert(int vetor[]){

register int i, j, i_aux;

	for( i=1; i<5; i++) {

	i_aux = vetor[i];

		for( j=i-1; j>=0 && i_aux < vetor[j]; j--){
		    vetor[j+1]=vetor[j];
		}

	vetor[j+1]=i_aux;

	}
	return;
}


int main(void){

	int cont;

	int v[] = { 13,7,5,1,4 };

	insert(v);

	printf("Ordenado:");

	for(cont = 0; cont < 5; cont++) {
    	printf(" %d ", v[cont] );
	}

	printf("\n");

}
