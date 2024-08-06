/*
Faca um programa para ler um vetor de 20 elementos numericos inteiros. 
Apos, exibir as posicoes onde estao guardados os numeros 4. 
Se nao houver ocorrencias deste numero, entao exibir mensagem adequada.

casos de teste
1)
8 5 6 4 10 11 12 3 4 6 9 ... valores armazenados dentro do vetor
0 1 2 3 4  5  6  7 8 9 10    indices do vetor - posicao 

2)
8 5 6 2 10 11 12 3 1 6 9 ... valores armazenados dentro do vetor
0 1 2 3 4  5  6  7 8 9 10    indices do vetor - posicao 


*/
#include <stdio.h>
#define TAM 5
int main (void)
{
	int vetor[TAM], i, flag = 0;  // por que o flag inicializado com zero -> zero equivale ao valor false
	                              // flag assumir um valor diferente de zero (1) -> equivale ao valor true
	// entrada de dados para o vetor
	for (i=0;i<TAM;i++)
	{
		printf ("Informe o nro: ");
		scanf ("%d", &vetor[i]);
	}
	
	// processamento -> procurar nros 4 armazenados no vetor
	for (i=0;i<TAM;i++)
	{
		if (vetor[i] == 4) // posicao do vetor
		{
			printf ("posicao do nro 4 %d \n", i);
			flag = 1;   // equivale ao valor true
		}
		
	}
	if (!flag) // continua com o valor da inicializacao padrao eh porque a execucao nao passou pela
	               // linha 35
	{
		printf ("Nao existe o nro 4 armazenado no vetor \n");
	}
	
	// mostrar o vetor
	printf ("Os valores digitados: \n");
	for (i=0;i<TAM;i++)
	{
		printf (" %d ",vetor[i]);
	}
}

