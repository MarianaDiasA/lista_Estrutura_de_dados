#include<stdio.h>
#include<stdlib.h>
#define MAX 5 
#define COL 2
//constante para controlar o tamanho

//Mariana Dias Almeida uc21102686
//nao estou conseguindo alterar a linha 1(segunda linha)

void insertion_sort(int *a);   //declarando a funcao de ordenacao  a=valor q ta na posicao

int main (int argc, char** argv){
	int l=0,c=0, mat[COL][MAX];
	for(l=0;l<COL;l++){
		for(c=0;c<MAX;c++){
			printf("Digite o valor da posicao [%d][%d]: ",l , c);
			scanf("%d", &mat[l][c]);
		} 
	}
	for(l=0;l<COL;l++) insertion_sort(mat);
	printf("\nValores ordenados\n");
	
	for(l=0;l<COL;l++){
		printf("linha %d: ",l);
		for(c=0;c<MAX;c++){
			printf("%d \t",mat[l][c]);
		}
		printf("\n");
	}
	return 0;
}
	
void insertion_sort(int *a){
	int i,j,tmp;
	for (i=1;i<MAX;i++){
		tmp=a[i];
		for(j=i-1;j>=0&&tmp<a[j];j--){
			a[j+1] = a[j];
		}
		a[j+1] = tmp;
	}
	
}
