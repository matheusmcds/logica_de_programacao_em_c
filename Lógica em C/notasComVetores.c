/*) Escrever um programa que lê as notas dos alunos de uma determinada classe e as
armazena num vetor. Depois lista as notas que são menores que 5.0. O número de
alunos da classe é igual a 10.
*/

#include<stdio.h>
int main (void){
	float notas[10];
	int cont = 0;
	
	for(cont = 0; cont < 10 ; cont++){
		printf("informe a nota do aluno:");
		scanf("%f", &notas[cont]);
	}

	for(cont = 0; cont < 10 ; cont++){
		if(notas [cont] < 5){
			printf("\nnotas: %f ", notas[cont]);
		}
	}
	
}
