#include <stdio.h>

int main() {
    int arr1[10];
    int arr2[10];

    // Leitura dos 10 valores para o primeiro vetor
    printf("Informe 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Criação do segundo vetor com os números negativos substituídos por 0
    for (int i = 0; i < 10; i++) {
        if (arr1[i] < 0) {
            arr2[i] = 0;
        } else {
            arr2[i] = arr1[i];
        }
    }

    // Impressão dos dois vetores
    printf("Primeiro vetor (arr1): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Segundo vetor (arr2) com negativos trocados por 0: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
/*Criar um vetor de 10 elementos inteiros. A seguir criar outro vetor onde todos os
números negativos deverão ser trocados por 0 (zero). Escrever os dois vetores.*/
