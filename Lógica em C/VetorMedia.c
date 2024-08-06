/*Ler um vetor que contenha as notas de uma turma de 6 alunos. Calcular a média destes
6 alunos e contar quantos alunos obteve nota acima desta média calculada. Escrever a
média da turma e o resultado da contagem.*/

#include <stdio.h>

int main() {
    float notas[6];
    float soma = 0;
    float media;
    int countAcimaMedia = 0;

    // Leitura das notas dos 6 alunos
    printf("Informe as notas dos 6 alunos:\n");
    for (int i = 0; i < 6; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 6;

    // Contagem dos alunos com nota acima da média
    for (int i = 0; i < 6; i++) {
        if (notas[i] > media) {
            countAcimaMedia++;
        }
    }

    // Impressão da média e do número de alunos acima da média
    printf("Média da turma: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", countAcimaMedia);

    return 0;
}

