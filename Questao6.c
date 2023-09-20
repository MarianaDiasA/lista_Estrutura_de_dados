#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 4
#define COL 2
//MARIANA DIAS ALMEIDA UC21102686
int main(){
	int i=0,n=0,l=0,c=0;
	int mat[COL][MAX];
	
	
	for(l=0;l<COL;l++){
		for(c=0;c<MAX;c++){
			printf("Digite o valor da posicao [%d][%d]: ",l , c);
			scanf("%d", &mat[l][c]);
		}
	}
	

	printf("\nInforme um numero: ");
	scanf("%d",&n);
				
	for(l=0;l<COL;l++){
		for(c=0;c<MAX;c++){
			if(mat[l][c]==n){
				printf("posicao: [%d][%d]", l, c);
				i = 1;
			}			
		}
	}
	
	if(i!=1){
		printf("Nao encontrado!");
	}
	
	
	return 0;
	
}
