#include <stdio.h>
#define TAM 5

int main () {

    int i = 0, j = 0, sLinha4 = 0, sLinha2 = 0, sTotal = 0, sDiagonal = 0;
    float mat[TAM][TAM];
    
    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {
            
            printf("\nInsira os valores da matriz 5x5: ");
            scanf("%f", &mat[i][j]);

        }

    }

    for (i = 0; i < TAM; i++) {
        
        for (j = 0; j < TAM; j++) {
            
            sTotal += mat[i][j];

            if (i == 3) {
                
                sLinha4 += mat[i][j];

            } else if (i == 2) {

                sLinha2 += mat[i][j];
            
            } else if (i == j) {
                
                sDiagonal += mat[i][j];

            }

        }

    }

    printf("\nA soma da linha 4 = %.f", (float) sLinha4);
    printf("\nA soma da linha 2 = %.f", (float) sLinha2);
    printf("\nA soma da diagonal = %.f", (float) sDiagonal);
    printf("\nA soma da matriz = %.f", (float) sTotal);

    return 0;
}