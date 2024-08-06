/* Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15
elementos cujas 5 primeiras posições contenham os elementos de R e as 10 últimas
posições, os elementos de S. Escrever o vetor X.*/

#include <stdio.h>

int main() {
    int R[5], S[10], X[15];

    // Leitura dos valores para o vetor R
    printf("Informe os 5 valores do vetor R:\n");
    for (int i = 0; i < 5; i++) {
        printf("R[%d]: ", i);
        scanf("%d", &R[i]);
    }

    // Leitura dos valores para o vetor S
    printf("Informe os 10 valores do vetor S:\n");
    for (int i = 0; i < 10; i++) {
        printf("S[%d]: ", i);
        scanf("%d", &S[i]);
    }

    // Copiar os elementos de R para as 5 primeiras posições de X
    for (int i = 0; i < 5; i++) {
        X[i] = R[i];
    }

    // Copiar os elementos de S para as 10 últimas posições de X
    for (int i = 0; i < 10; i++) {
        X[5 + i] = S[i];
    }

    // Impressão do vetor X
    printf("Vetor X:\n");
    for (int i = 0; i < 15; i++) {
        printf("X[%d]: %d\n", i, X[i]);
    }

    return 0;
}

