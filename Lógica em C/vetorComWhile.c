/*Fazer um programa para preencher um vetor de 15 posições com números entre 0 a 30.
Após, ler números inteiros e procurá-los no vetor até que seja digitado o número 99.
Quando o loop de pesquisa encerrar, então mostrar quantas vezes você acertou os
números do vetor. Lembre-se de que o número pode estar repetido dentro do vetor,
considerar acertos tantas quantas forem as vezes que o número estiver no vetor. Ao
final do processo, exibir o vetor e o número de acertos do jogador.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main() {
    int vetor[SIZE];
    int numero, acertos = 0;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Preencher o vetor com números aleatórios entre 0 e 30
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 31; // rand() % 31 gera números entre 0 e 30
    }

    // Exibir o vetor gerado
    printf("Vetor gerado:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ler números inteiros e procurá-los no vetor
    while (1) {
        printf("Digite um número inteiro (99 para sair): ");
        scanf("%d", &numero);

        if (numero == 99) {
            break;
        }

        // Procurar o número no vetor
        for (int i = 0; i < SIZE; i++) {
            if (vetor[i] == numero) {
                acertos++;
            }
        }
    }

    // Exibir o número de acertos do jogador
    printf("Número de acertos: %d\n", acertos);

    // Exibir o vetor final
    printf("Vetor final:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

