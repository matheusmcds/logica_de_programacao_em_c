#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int tam = 3;
int main (void){
	int mat[tam][tam];
    int i = 0;
    int j = 0;
    int num_atual = 0;
    int num_ini = 0;
    int cont = 0;
    
    
    srand(time(NULL)); // codigo para gerar numeros aleatorios
    
    for(i = 0; i < tam; i++){
    	for(j = 0; j < tam; j++){
    		mat[i][j] = rand() % 2;
		}
	}
    for(i = 0; i < tam; i++){
    	for(j  = 0; j < tam; j++){
    		printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	num_ini = mat[0][0];
    
    for(i = 0; i < tam; i++){
    	for(j = 0; j < tam; j++){
    		num_atual = mat[i][j];
    		if(num_atual == num_ini){
    			cont++;
			} else {
				printf("%d %d\n", num_ini, cont);
				num_ini = num_atual;
				cont = 1;
			}
		}
	}
	printf("%d %d\n", num_ini, cont);
    
}
