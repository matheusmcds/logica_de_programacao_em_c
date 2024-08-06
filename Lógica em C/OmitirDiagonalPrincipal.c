/* Fazer um programa que leia números inteiros para preencher uma matriz 4 X 4 e os
exiba em formato de matriz omitindo os valores da diagonal principal.*/
#include <stdio.h>
int main (void){
	int matriz[4][4];
	int L;
	int C;
	
		for(L = 0 ; L < 4 ; L++){
			for(C = 0 ; C < 4 ; C++){
				printf("informe o valor:\n");
				scanf("%d", &matriz[L][C]);
			}
		}
		
		for(L = 0 ; L < 4 ; L++){
				for(C = 0 ; C < 4 ; C++){
					if(L!=C){
						printf (" | %d ", matriz[L][C]);
					}	
				}
				printf (" |\n ");
			}
}
