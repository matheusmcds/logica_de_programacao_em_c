/*Escreva em c um programa que solicita 5 valores ao usuário, armazena esses valores em um array chamado  vet1 
	de inteiros. Depois, copia o conteúdo  desse array para um segundo array chamado  vet1. O programa deve 
	imprimir os dois arrays na tela. 
 

*/

#include <stdio.h>

int main() {
    int vet1[5];
    int vet2[5];

    // Solicita os 5 valores ao usuário e armazena em vet1
    for (int i = 0; i < 5; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    // Copia o conteúdo de vet1 para vet2
    for (int i = 0; i < 5; i++) {
        vet2[i] = vet1[i];
    }

    // Imprime os dois arrays
    printf("Valores em vet1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    printf("Valores em vet2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet2[i]);
    }
    printf("\n");

    return 0;
}

