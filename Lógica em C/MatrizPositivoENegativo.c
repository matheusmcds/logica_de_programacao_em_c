/*Ler uma matriz 5 X 5 com números inteiros positivos e negativos. Depois, percorrer a
matriz e criar dois vetores: um com os números positivos e outro com os negativos. Os dois
vetores criados, não poderão possuir espaços em branco entre os elementos.*/

#include <stdio.h>

#define SIZE 5

int main() {
    int matriz[SIZE][SIZE];
    int positivos[SIZE * SIZE]; // Vetor para armazenar os números positivos
    int negativos[SIZE * SIZE]; // Vetor para armazenar os números negativos
    int tamPositivos = 0; // Tamanho atual do vetor de positivos
    int tamNegativos = 0; // Tamanho atual do vetor de negativos

    // Ler os elementos da matriz
    printf("Informe os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Separar os elementos em vetores de positivos e negativos
            if (matriz[i][j] >= 0) {
                positivos[tamPositivos++] = matriz[i][j];
            } else {
                negativos[tamNegativos++] = matriz[i][j];
            }
        }
    }

    // Mostrar os elementos positivos
    printf("\nElementos Positivos:\n");
    for (int i = 0; i < tamPositivos; i++) {
        printf("%d\t", positivos[i]);
    }
    printf("\n");

    // Mostrar os elementos negativos
    printf("\nElementos Negativos:\n");
    for (int i = 0; i < tamNegativos; i++) {
        printf("%d\t", negativos[i]);
    }
    printf("\n");

    return 0;
}

