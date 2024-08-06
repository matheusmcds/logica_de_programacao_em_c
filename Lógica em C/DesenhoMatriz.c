/*Fazer um programa que leia uma matriz 5 X 5 com números do intervalo de 0 a 50.
Imprimir a matriz em formato de matriz.*/

#include <stdio.h>
int main (void){
	int matriz[5][5];
	int L;
	int C;
	
		for(L = 0 ; L < 4 ; L++){
			for(C = 0 ; C < 4 ; C++){
				printf("informe o valor:\n");
				scanf("%d", &matriz[L][C]);
				
				while(matriz[L][C] > 50){
					printf("Digite um valor entre 0 e 50\n");
					printf("informe o valor:\n");
					scanf("%d", &matriz[L][C]);	
		}	}	}
	
			for(L = 0 ; L < 4 ; L++){
				for(C = 0 ; C < 4 ; C++){
					printf (" | %d ", matriz[L][C]);
				}
				printf (" |\n ");
			}
					
}
