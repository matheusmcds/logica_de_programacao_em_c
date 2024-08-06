/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação & Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa SegundoT2:
* -------------------------
* Objetivo do Programa: cirar um programa que leia diversas palavras, armazene e separe conforme solicitado
* Autor: Matheus Costa da Silva 
* Data da entrega do arquivo fonte: 26/06/2024
*/

#include <stdio.h>
#include <strings.h>
#include <locale.h>
#define TAM 10

int main (void){
    setlocale(LC_ALL,"Portuguese");
    char palavra[46];
    char vetorX[TAM][46];
    char vetorR[TAM][46];
    char menorPalavra[46] = {"pneumoultramicroscopicossilicovulcanoconiótico"};
    char maiorPR[46];
    float mediaX = 0;
    int sArmazenamentoX = 0, sArmazenamentoR = 0;
    int contX = 0, contR = 0;

    printf("digite uma palavra ou digite \"sair\" para encerrar o programa: ");
    gets(palavra);
    while(strcasecmp("sair", palavra) != 0){
        if (strlen(palavra) < strlen(menorPalavra)){
            strcpy(menorPalavra, palavra);
        }
        if (tolower((palavra[0]) == 'x') && (contX < TAM)){
            strcpy(vetorX[contX],palavra);
            contX++;
            mediaX = mediaX + strlen(palavra);
        }else if (tolower(palavra[0]) == 'x'){
            sArmazenamentoX++;
        }

        if (tolower((palavra[strlen(palavra) - 1]) == 'r') && (contR < TAM)){
            strcpy(vetorR[contR],palavra);
            contR++;
            if (strlen(palavra) > strlen(maiorPR)){
                strcpy(maiorPR, palavra);
            }
        } else if (tolower(palavra[strlen(palavra) - 1]) == 'r'){
            sArmazenamentoR++;
        }

        printf("digite uma palavra ou digite \"sair\" para encerrar o programa: ");
        gets(palavra);
    }


    printf("a menor palavra digitada foi \"%s\"\n", menorPalavra);
    printf("a maior palavra digitada que termina com \"R\" foi \"%s\"\n", maiorPR);
    printf("quantidade de palavras que não puderam ser armazenadas no vetor X: %d\n", sArmazenamentoX);
    printf("quantidade de palavras que não puderam ser armazenadas no vetor R: %d\n", sArmazenamentoR);

    if (contX != 0){
        mediaX = mediaX / contX;
        printf("média dos tamanhos das palavras que iniciam com a letra x: %.2f", mediaX);
    } else {
        printf("não foram digitadas palavras que começam com X");
    }

}
