/*Escreva um programa que leia uma matriz de 4X4 com números inteiros e divida todos os seus
elementos pelo menor valor da matriz, armazenando em outra matriz. No final, mostrar as duas
matrizes.*/

#include <stdio.h>

#define SIZE 4

int main() {
    int matriz[SIZE][SIZE];
    float matrizDividida[SIZE][SIZE];
    int menorValor;
    int i, j;

    // Ler os elementos da matriz
    printf("Informe os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrar o menor valor da matriz
    menorValor = matriz[0][0];
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }

    // Dividir todos os elementos pelo menor valor e armazenar na matrizDividida
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrizDividida[i][j] = (float)matriz[i][j] / menorValor;
        }
    }

    // Mostrar a matriz original
    printf("\nMatriz Original:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar a matriz resultante com os valores divididos
    printf("\nMatriz Dividida pelo Menor Valor (%d):\n", menorValor);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%.2f\t", matrizDividida[i][j]);
        }
        printf("\n");
    }

    return 0;
}

