/*1) Ler diversas palavras e informar:
a) quantas palavras iniciam pela letra x;
b) quantas palavras possuem a letra q;
c) quantas palavras não iniciam pela letra r ou s;
Determine um flag para finalizar a leitura. Tenha cuidado para que o flag não entre nos
cálculos
*/

#include <stdio.h>
#include <strings.h>
int main (void){
	char palavra[100];
	char flag;
	int plvrX = 0;
	int plvrQ = 0;
	int pvrlAlt = 0;
	int cont;
	int sinal = 0;
	
	printf("digite e para entrar no programa ou qualquer outra letra para sair:\n ");
	scanf("%c", &flag);
	
	fflush(stdin);
	while(flag == 'e'){
		printf("informe uma palavra:\n ");
		scanf("%s", &palavra);
		
		sinal = 0;
		for(cont = 0 ; cont < strlen(palavra) ; cont++){
			if(palavra[cont] == 'q'){
				sinal = 1;
			}
			
		}
		
		if(palavra[0] == 'x'){
			plvrX++;
		}
		if(sinal == 1){
			plvrQ++;
		}
		if((palavra[0] != 'r') && (palavra[0] != 's')){
			pvrlAlt++;
		}
	fflush(stdin);	
	
	printf("digite e para continuar no programa ou qualquer outra letra para sair:\n ");
	scanf("%c", &flag);	
	
	fflush(stdin);
	}
	
	printf("quantidade de palavras  iniciadas por x: %d\n",plvrX );
	printf("quantidade de palavras com a letra q: %d\n",plvrQ );
	printf("quantidade de palavras que nao iniciam com r ou s: %d\n",pvrlAlt );
	
	
	
}
