/*Dado uma matriz de ordem 3x3 faça um algoritmo que calcule a soma da diagonal
principal.*/

#include <stdio.h>
int main (void){
	int matriz [3][3];
	int soma;
	int L;
	int C;
	
	for(L = 0 ; L < 3 ; L++){
		for(C = 0 ; C < 3 ; C++){
			printf("informe o valor:\n");
			scanf("%d", &matriz[L][C]);
			
			if( L == C){
				soma = soma + matriz[L][C];
			}
		}
	}
	
	printf("o resultado da soma é: %d",soma);
	
}
