/*
   Fazer um programa para ler 5 idades em um vetor.
   Mostrar a media (somatorio/quantidade) das idades.
*/
#include <stdio.h>
#define TAM 5
#define RESP 'S' // exemplo de constante do tipo char
int main (void)
{
	int idade[TAM];
	int i, somaIdades = 0;
	double media;
	
	// entrada de dados para o vetor
	for (i=0;i<TAM;i++)
	{
		printf ("Informe a idade: ");
		scanf ("%d", &idade[i]);
	}
	
	// processamento -> fazer o somatorio
	for (i=0;i<TAM;i++)
	{
		somaIdades = somaIdades + idade[i];
	}
	media = (double)somaIdades / TAM;
	printf ("A media calculada: %lf", media);
	// mostrar o vetor
	for (i=0;i<TAM;i++)
	{
		printf (" %d ",idade[i]);
	}
}

