/*Escreva um programa em c que determine se dois arrays unidimensionais de números inteiros são iguais. Crie dois 
	arrays de tamanho 5, leia 5 itens para cada array e depois compare-os. */
	
	#include <stdio.h>

int main() {
    int arr1[5];
    int arr2[5];
    int iguais = 1; // Assume inicialmente que os arrays são iguais

    // Leitura dos valores para o primeiro array
    printf("Informe 5 valores para o primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Leitura dos valores para o segundo array
    printf("Informe 5 valores para o segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Comparação dos arrays
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            iguais = 0; // Se algum elemento for diferente, os arrays não são iguais
            break; // Não precisa continuar comparando
        }
    }

    // Exibir o resultado da comparação
    if (iguais) {
        printf("Os dois arrays são iguais.\n");
    } else {
        printf("Os dois arrays são diferentes.\n");
    }

    return 0;
}

