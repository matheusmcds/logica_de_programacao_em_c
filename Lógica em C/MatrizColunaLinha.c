/*9. Dada uma matriz 3 X 3, onde toda a primeira coluna deve ser preenchido com o número
0 (zero), a segunda coluna com o número 1 (um) e a terceira coluna com o número dois
(dois).*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS] = {0}; // Inicializa a matriz com zeros
    int i;
    int j;

    // Preenche a segunda coluna com uns
    for ( i = 0; i < LINHAS; i++) {
        matriz[i][1] = 1;
    }

    // Preenche a terceira coluna com dois
    for (i = 0; i < LINHAS; i++) {
        matriz[i][2] = 2;
    }

    // Mostra a matriz resultante
    printf("Matriz 3x3:\n");
    for ( i = 0; i < LINHAS; i++) {
        for ( j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

