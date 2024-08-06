/*10. Escrever um programa que preenche uma matriz 6 X 6, com o elemento * (asterisco) as
posições acima da diagonal principal e com o elemento @ (arroba) as posições abaixo da
diagonal principal.*/


#include <stdio.h>

#define TAMANHO 6

int main() {
    char matriz[TAMANHO][TAMANHO];

    // Preencher a matriz com asteriscos (*) acima da diagonal principal e arrobas (@) abaixo
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (i < j) {
                matriz[i][j] = '*'; // Acima da diagonal principal
            } else if (i > j) {
                matriz[i][j] = '@'; // Abaixo da diagonal principal
            } else {
                matriz[i][j] = ' '; // Diagonal principal (opcional, pode ser omitido)
            }
        }
    }

    // Mostrar a matriz resultante
    printf("Matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

