/*Escreva em c um programa que solicita 8 inteiros ao usuário e guarda esses valores em um array. Depois o 
	programa deve descobrir e exibir qual a posição do elemento de maior valor. 
*/

#include <stdio.h>

int main() {
    int arr[8];
    int maxValue;
    int maxPosition = 0;

    // Solicita os 8 valores ao usuário e armazena no array
    for (int i = 0; i < 8; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Inicializa maxValue com o primeiro elemento do array
    maxValue = arr[0];

    // Descobre o elemento de maior valor e sua posição
    for (int i = 1; i < 8; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxPosition = i;
        }
    }

    // Exibe a posição do elemento de maior valor
    printf("O elemento de maior valor está na posição: %d\n", maxPosition + 1);

    return 0;
}

