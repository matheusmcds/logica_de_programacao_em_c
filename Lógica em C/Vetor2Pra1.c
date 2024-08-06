/*Escrever um programa em cque leia 2 vetores de 5 posições cada e depois crie um terceiro vetor de 10 posições 
	que contenha os elementos dos outros 2 vetores
*/

#include <stdio.h>

int main() {
    int vet1[5];
    int vet2[5];
    int vet3[10];

    // Leitura dos valores para o primeiro vetor
    printf("Informe 5 valores para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    // Leitura dos valores para o segundo vetor
    printf("Informe 5 valores para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    // Criação do terceiro vetor contendo os elementos dos outros dois vetores
    for (int i = 0; i < 5; i++) {
        vet3[i] = vet1[i];
    }
    for (int i = 0; i < 5; i++) {
        vet3[i + 5] = vet2[i];
    }

    // Impressão dos três vetores
    printf("Valores no primeiro vetor (vet1): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    printf("Valores no segundo vetor (vet2): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet2[i]);
    }
    printf("\n");

    printf("Valores no terceiro vetor (vet3): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    return 0;
}

