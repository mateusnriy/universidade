/*Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior, 
atribuindo zero a todos os elementos acima da diagonal principal, 
escrevendo-a ao final.*/

#include <stdio.h>
#define TAM 3

int main () {

    int i, j;
    float matriz[TAM][TAM];

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            printf("\nInforme os valores da matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

        }
        
    }

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            if (i < j) {

                matriz[i][j] = 0;

            }

        }
        
    }

    for (i = 0; i < TAM; i++) {
        printf("\n");
        for (j = 0; j < TAM; j++) {

            printf("\t%.f", matriz[i][j]);

        }
        
    }

    return 0;
}