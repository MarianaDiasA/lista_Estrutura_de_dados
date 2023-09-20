#include <stdio.h>
#include <stdlib.h>
#define MAX 5  
#define COL 2
//MARIANA DIAS ALMEIDA UC21102686

//FUNÇAO DE ORDENAÇAO QUICKSORT
void quickSort(int *a, int left, int right);	//chamei a funçao

int main(int argc, char **argv) {
	int l=0,c=0, mat[COL][MAX];
	
	for(l=0;l<COL;l++){
		for(c=0;c<MAX;c++){
			printf("Digite o valor da posicao [%d][%d]: ",l , c);
			scanf("%d", &mat[l][c]);
		} 
	}
	for(l=0;l<COL;l++) quickSort(mat[l], 0, MAX - 1);
	
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
void quickSort(int *a, int left, int right){	//trabalhando a funçao
	int i,j,x,y;
	i=left;
	j=right;
	x=a[(left+right)/2];	//quebrando o vetor ao meio 
	
	while(i <= j){
		while(a[i]<x&&i<right){
			i++;
		}
		while(a[j]>x&&j>left){
			j--;
		}
		if(i<=j){
			y=a[i];
			a[i]=a[j];
			a[j]=y;
			i++;
			j--;
		}
	}
	if(j > left){
		quickSort(a,left,j);
	}
	if(i < right){
		quickSort(a,i,right);
	}
}


