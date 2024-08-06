/*Fazer um programa que tem dois vetores do mesmo tamanho (6). O usuário fornecerá
os dados do primeiro, e depois deverá ser armazenado e exibido o valor do segundo
vetor que é o valor do primeiro vetor somado a posição do elemento. */

#include <stdio.h>

int main() {
    int vetor1[6];
    int vetor2[6];

    // Leitura dos valores para o primeiro vetor
    printf("Informe os 6 valores do primeiro vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Cálculo dos valores para o segundo vetor
    for (int i = 0; i < 6; i++) {
        vetor2[i] = vetor1[i] + i;
    }

    // Impressão dos dois vetores
    printf("Primeiro vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo vetor (valores do primeiro vetor somados à posição):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}

