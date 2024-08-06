/*Escrever um programa que leia uma matriz de ordem 3 X 3. Após percorrer esta matriz
para encontrar ocorrências do número 20. Guardar as posições em vetores: um para linha e
outro para coluna. Ao final do processo exibir as posições (linha e coluna) onde o número
20 está posicionado. Se não houve ocorrências, mostrar mensagem adequada.*/

#include <stdio.h>
int main (void){
	int matriz[3][3];
	int L;
	int C;
	int K = 0;
	int vetorL[9];
	int vetorC[9];
	
	for(L = 0 ; L < 3 ; L++){
		for(C = 0 ; C < 3 ; C++){
			printf("informe o valor:\n");
			scanf("%d", &matriz[L][C]);
				if(matriz[L][C] == 20){
					vetorL[K] = L;
					vetorC[K] = C;
					K++;
				}
		}
	}	
	
	for (L = 0 ; L < K ; L++){
		printf("posições do valor 20:%d, %d\n",vetorL[L], vetorC[L] );
	}		
	
}
