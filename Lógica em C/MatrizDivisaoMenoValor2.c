/*12. Escreva um programa que leia uma matriz de 4X4 com números inteiros e divida todos
os seus elementos pelo menor valor da matriz, armazenando em outra matriz. No final,
mostrar as duas matrizes.*/

#include <stdio.h>

#define SIZE 4

int main() {
    int matrizA[SIZE][SIZE];
    float matrizB[SIZE][SIZE];
    int menorValor;

    // Leitura da matriz A
    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Encontrar o menor valor na matriz A
    menorValor = matrizA[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrizA[i][j] < menorValor) {
                menorValor = matrizA[i][j];
            }
        }
    }

    // Preencher a matriz B com os valores divididos pelo menor valor
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrizB[i][j] = (float)matrizA[i][j] / menorValor;
        }
    }

    // Exibir as matrizes A e B
    printf("\nMatriz A (%dx%d):\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B (%dx%d) - Elementos divididos pelo menor valor (%d):\n", SIZE, SIZE, menorValor);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%.2f\t", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}

