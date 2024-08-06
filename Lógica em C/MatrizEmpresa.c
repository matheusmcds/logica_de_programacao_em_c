/*Uma  certa empresa  fez uma pesquisa de mercado para saber se as pessoas gostaram de um novo produto 
lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (S/N). Sabendo-se que foram entrevistadas 20 pessoas, fazer um algoritmo em c que calcule qual a porcentagem de mulheres e de homens que gostaram do produto

*/

#include <stdio.h>

int main() {
    char sexos[20];
    char respostas[20];
    int totalHomens = 0;
    int homensGostaram = 0;
    int totalMulheres = 0;
    int mulheresGostaram = 0;

    // Leitura dos dados dos 20 entrevistados
    for (int i = 0; i < 20; i++) {
        printf("Informe o sexo do entrevistado %d (M/F):\n", i + 1);
        scanf(" %c", &sexos[i]);

        printf("Gostou do produto? (S/N):\n");
        scanf(" %c", &respostas[i]);

        if (sexos[i] == 'M' || sexos[i] == 'm') {
            totalHomens++;
            if (respostas[i] == 'S' || respostas[i] == 's') {
                homensGostaram++;
            }
        } else if (sexos[i] == 'F' || sexos[i] == 'f') {
            totalMulheres++;
            if (respostas[i] == 'S' || respostas[i] == 's') {
                mulheresGostaram++;
            }
        } else {
            printf("Sexo inválido. Por favor, informe M ou F.\n");
            i--; // Para repetir a iteração para o mesmo entrevistado
        }
    }

    // Cálculo das porcentagens
    float porcentagemHomensGostaram = (totalHomens == 0) ? 0 : ((float)homensGostaram / totalHomens) * 100;
    float porcentagemMulheresGostaram = (totalMulheres == 0) ? 0 : ((float)mulheresGostaram / totalMulheres) * 100;

    // Exibição dos resultados
    printf("Porcentagem de homens que gostaram do produto: %.2f%%\n", porcentagemHomensGostaram);
    printf("Porcentagem de mulheres que gostaram do produto: %.2f%%\n", porcentagemMulheresGostaram);

    return 0;
}

