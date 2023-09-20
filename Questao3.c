#include<stdio.h>
#include<stdlib.h>
#define MAX 4 //criando a constante p controlar o tamanho da estrutura

//Mariana Dias Almeida UC21102686

void insertionSortD(int *array,int tamanho);   //declarandi a funcao de ordenacao  a=valor q ta na posicao

int main (int argc, char** argv){
	int i, vet[MAX];
	for(i=0;i<MAX;i++){
		printf("Informe um valor: ");
		scanf("%d", &vet[i]);
	}
	insertionSortD(&vet,MAX);
	printf("\nValores decrescente\n");
	for(i=0;i<MAX;i++){
		printf("%d\t", vet[i]);
	}
	
	return 0;
}

void insertionSortD(int *array, int tamanho) {
      int i,j=1, tmp;
      for (i = 1; i < tamanho; i++,j++) {
            while (j > 0 && array[j - 1] < array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
    
      }
}
