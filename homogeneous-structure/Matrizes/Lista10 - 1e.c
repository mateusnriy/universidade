/*
Calcular a soma dos elementos que estão acima da diagonal principal em uma 
matriz numérica de ordem 4.
*/
#include <stdio.h>
#define TAM 4

int main () {

    int i = 0, j = 0;
    float mat[TAM][TAM], soma = 0;

    printf("\n+-------------------------------+\n");
    printf("|  Digite os valores da matriz  |\n");
    printf("+-------------------------------+\n");

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

           if (i < j) {

            soma += mat[i][j];

           }
        }
    }

    printf("\n+---------------------------------------+");
    for (i = 0; i < TAM; i++) {
        printf("\n|");
        for (j = 0; j < TAM; j++) {

            printf("\t%.f", mat[i][j]);
        
        }
        printf("\t|");
    }
    printf("\n+---------------------------------------+\n");

    printf("\nSoma dos elementos que estao acima da diagonal principal = %.f\n", soma);

    return 0;
}