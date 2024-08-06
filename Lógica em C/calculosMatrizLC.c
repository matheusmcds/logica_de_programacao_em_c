/*
3. Dada uma matriz de ordem 3x3 faça um algoritmo que:
a) Calcule a soma dos elementos da primeira coluna;
b) Calcule o produto dos elementos da primeira linha;
c) Calcule a soma de todos os elementos da matriz;
*/

#include <stdio.h>
#include <locale.h>

int main (void){
    int matriz[3][3];
    int somaCol;
    int prodLinha;
    int somaTotal;
    int l;
    int c;

    for(l = 0 ; l < 3 ; l++){
        for(c = 0 ; c < 3 ; c++){
            printf("informe um valor:\n");
            scanf("%d", &matriz);
        }
    }

    for(l = 0 ; l < 3 ; l++){
        somaCol = matriz[l][0] +somaCol;
    }

    for(c = 0 ; c < 3 ; c++){
       prodLinha = matriz[0][c] * prodLinha;
    }

     for(l = 0 ; l < 3 ; l++){
        for(c = 0 ; c < 3 ; c++){
            somaTotal = somaTotal +  matriz[l][c];
        }
    }

      printf("resultado:%d", somaCol);
      printf("resultado:%d", prodlinha);
       printf("resultado:%d", somaTotal);


}
