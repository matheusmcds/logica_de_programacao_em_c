/*Ler um vetor X de 10 elementos inteiros. Calcular a média aritmética e copiar para um
vetor A os valores de X que estão acima da média calculada e para um vetor B os
valores que estão abaixo da média. Imprimir a média calculada e os vetores A e B.
OBS.: Não deixar espaços vagos entre os elementos de A nem de B.
*/

#include <stdio.h>

#define SIZE 10

int main() {
    int X[SIZE], A[SIZE], B[SIZE];
    int soma = 0, countA = 0, countB = 0;
    float media;

    // Ler os valores para o vetor X
    printf("Informe os 10 valores do vetor X:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
        soma += X[i];
    }

    // Calcular a média aritmética
    media = (float)soma / SIZE;

    // Copiar valores para os vetores A e B
    for (int i = 0; i < SIZE; i++) {
        if (X[i] > media) {
            A[countA++] = X[i];
        } else if (X[i] < media) {
            B[countB++] = X[i];
        }
    }

    // Imprimir a média calculada
    printf("Média aritmética: %.2f\n", media);

    // Imprimir o vetor A
    printf("Vetor A (valores acima da média):\n");
    for (int i = 0; i < countA; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Imprimir o vetor B
    printf("Vetor B (valores abaixo da média):\n");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}


