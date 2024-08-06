/*. Dada uma matriz de 5 X 5 e dois vetores de 5 posições que armazenam números reais. Escreva
um programa que leia valores para a matriz, calcule a soma das colunas, armazenando o resultado
em um dos vetores, e o produto das linhas, armazenando no outro vetor. Ao final escrever a matriz e
os dois vetores.*/

#include <stdio.h>

#define SIZE 5

int main() {
    int matriz[SIZE][SIZE];
    int somaColunas[SIZE] = {0}; // Inicializa vetor com zeros
    int produtoLinhas[SIZE] = {1}; // Inicializa vetor com uns (para não afetar a multiplicação)

    // Ler os elementos da matriz
    printf("Informe os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Calcular a soma das colunas
            somaColunas[j] += matriz[i][j];

            // Calcular o produto das linhas
            produtoLinhas[i] *= matriz[i][j];
        }
    }

    // Mostrar a matriz
    printf("\nMatriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar o vetor com a soma das colunas
    printf("\nSoma das Colunas:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", somaColunas[i]);
    }
    printf("\n");

    // Mostrar o vetor com o produto das linhas
    printf("\nProduto das Linhas:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", produtoLinhas[i]);
    }
    printf("\n");

    return 0;
}

