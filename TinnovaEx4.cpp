#include <stdio.h>
#include <stdlib.h>
	
	void bubbleSort(int vet[], int n) //função bubble sort para ordenação de vetor; recebendo vetor e tamanho do vetor
	{
		int i,j, aux;
		
		for(i=0; i<n; i++) //controle de ordenação, auxilia nas perguntas para a ordenação; proximo numero sera ordenado;
		{
			 	for(j=0; j<n-1-i;j++)// segundo laço for de pergunta para ordenação; pergunta feita ate o numero onde j está, estar no lugar certo
			 	{
			 		if(vet[j]>vet[j+1]){ //pergunta do numero 1 comparado com numero "da frente" o proximo numero;
			 			aux =vet[j]; //utilizando auxiliar para rotacionar numero
			 			vet[j] = vet[j+1]; //realizando troca
			 			vet[j+1]= aux; // realizando troca
					 }
				 }
				 
		}
	}
	int main(void){
		int i, n=8, vet[8]={5,3,2,4,7,1,0,6}; //vertor solicitado no exercicio;
		
		
		for(i=0; i<n; i++){
			printf("vet[%d]=%d\n", i, vet[i]);
		bubbleSort(vet,n);
			}
		
		printf("\n\n");
	
		for(i=0; i<n; i++){
				printf("vet[%d]=%d\n", i, vet[i]);
			}
		
	}