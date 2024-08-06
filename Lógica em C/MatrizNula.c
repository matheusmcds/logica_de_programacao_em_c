/*11. Dada uma matriz A (n x m) imprimir o número de linhas e o número de colunas nulas
da matriz. Exemplo:
0 0 0 0
1 0 2 2
4 0 5 6
0 0 0 0
tem duas linhas nulas e uma coluna nulas. */

#include <stdio.h>

#define MAX_ROWS 4
#define MAX_COLS 4

int main() {
    int matriz[MAX_ROWS][MAX_COLS] = {
        {0, 0, 0, 0},
        {1, 0, 2, 2},
        {4, 0, 5, 6},
        {0, 0, 0, 0}
    };

    int linhasNulas = 0;
    int colunasNulas = 0;
    int i, j;

    // Verificar linhas nulas
    for (i = 0; i < MAX_ROWS; i++) {
        int nula = 1; // Assume que a linha é nula
        for (j = 0; j < MAX_COLS; j++) {
            if (matriz[i][j] != 0) {
                nula = 0; // Se encontrar um elemento diferente de zero, a linha não é nula
                break;
            }
        }
        if (nula) {
            linhasNulas++;
        }
    }

    // Verificar colunas nulas
    for (j = 0; j < MAX_COLS; j++) {
        int nula = 1; // Assume que a coluna é nula
        for (i = 0; i < MAX_ROWS; i++) {
            if (matriz[i][j] != 0) {
                nula = 0; // Se encontrar um elemento diferente de zero, a coluna não é nula
                break;
            }
        }
        if (nula) {
            colunasNulas++;
        }
    }

    // Exibir o resultado
    printf("A matriz tem %d linha(s) nula(s) e %d coluna(s) nula(s).\n", linhasNulas, colunasNulas);

    return 0;
}

