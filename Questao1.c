#include<stdio.h>
#include<stdlib.h>

//Mariana Dias Almeida uc21102686

int main (){
	
	
	int numeros=0;
	int i=0,aux,contador;
	int n[10];
	
	printf("Informe quantos numeros deseja: ");
	scanf("%d", &numeros);
	printf("\nAgora informe os valores: ");
	for(i=0;i<numeros;i++){	//for para inserir os valores
		scanf("%d", &n[i]);
	}
	printf("ordem atual: \n");	//for para imprimir os valores
	for(i=0;i<numeros;i++){
		printf("%d \t", n[i]);
	}
	
	for(contador=1;contador<numeros;contador++){	//for para iniciar o metodo(vai do primeiro item ao penultimo)
		for(i=0;i<numeros-1;i++){	//for para fazer as comparacoes ate chegar na penultima
			if(n[i] > n[i + 1]){	//if para realizar a troca
				aux = n[i];	//primeiro passo o valor para o aux
				n[i] = n[i + 1];	//primeiro recebeu o segundo
				n[i + 1] = aux;		//segundo recebe o valor do primeiro q tava no aux
			}
		}
	}
	printf("\nvalores ordenados: \n");
	for(i=0;i<numeros;i++){		//for pra mostrar os valores ordenados
		printf("%d \t", n[i]);
	}
	
	return 0;
}




