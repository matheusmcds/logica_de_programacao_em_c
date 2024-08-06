/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa PrimeiroT2:
* -------------------------
* Objetivo do Programa: Criar um código que receba um vetor de números inteiros faça o fatorial deles em outro vetor e no final mostre ambos
* Componentes do grupo: Matheus Costa da Silva 
* Data da entrega do arquivo fonte: 15/06/2024
*/

#include<stdio.h>
#include<locale.h>
#define NUMS 20
int main (void){
    setlocale (LC_ALL, "Portuguese");
    int vetorA[NUMS];
    long vetorFAT[NUMS];
    int cont,cont2;
    int fat = 0;

    for(cont = 0 ; cont < NUMS ; cont++){
        printf("Digite um valor inteiro: ");
        scanf("%d",&vetorA[cont]);
        vetorFAT[cont] = vetorA[cont];

        while(vetorA[cont] < 0){
            printf("Digite somente valores positivos! ");
            printf("\nDigite um valor inteiro: ");
            scanf("%d",&vetorA[cont]);
            vetorFAT[cont] = vetorA[cont];
        }

    }

     for(cont = 0 ; cont < NUMS ; cont++){
        cont2 = vetorA[cont] - 1;
        for (; cont2 >= 1; cont2--){
            vetorFAT[cont] = vetorFAT[cont] * cont2;
        }
     }

     printf("\nVetor A:");
     for (cont = 0; cont < NUMS; cont++){
        printf(" %d", vetorA[cont]);
     }
     printf("\nVetor A fatorado:");
     for (cont = 0; cont < NUMS; cont++){
        printf(" %d", vetorFAT[cont]);
     }
}
