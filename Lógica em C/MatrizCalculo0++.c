/*. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve:
a) a quantidade de elementos negativos da matriz;
b) a soma dos elementos da primeira coluna da matriz.*/

#include <stdio.h>

#define LINHAS 6
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int elementosNegativos = 0;
    int somaPrimeiraColuna = 0;

    // Ler os elementos da matriz
    printf("Informe os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Contar elementos negativos
            if (matriz[i][j] < 0) {
                elementosNegativos++;
            }

            // Calcular a soma da primeira coluna
            if (j == 0) {
                somaPrimeiraColuna += matriz[i][j];
            }
        }
    }

    // Exibir a quantidade de elementos negativos
    printf("Quantidade de elementos negativos na matriz: %d\n", elementosNegativos);

    // Exibir a soma dos elementos da primeira coluna
    printf("Soma dos elementos da primeira coluna: %d\n", somaPrimeiraColuna);

    return 0;
}

