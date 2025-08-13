/*Leia duas matrizes 20 x 20 e escreva os valores da primeira que ocorrem 
em qualquer posição da segunda.*/

#include <stdio.h>
#define TAM 20

int main() {

    int i, j, k, l;
    float matrizA[TAM][TAM], matrizB[TAM][TAM];

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            matrizA[i][j] = i + 1;

        }
        
    }

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            matrizB[i][j] = j + i;

        }
        
    }

    for (i = 0; i < TAM; i++) {
        printf("\n");
        for (j = 0; j < TAM; j++) {

            printf("\t%.f", matrizA[i][j]);

        }
        
    }

    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("\n");
        for (j = 0; j < TAM; j++) {

            printf("\t%.f", matrizB[i][j]);

        }
        
    }
    
    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {

            for (k = 0; k < TAM; k++) {

                for (l = 0; l < TAM; l++) {

                    if (matrizA[i][j] == matrizB[k][l]) {

                        printf("\n%.f", matrizA[i][j]);
                        break;
                        
                    }
                }
            }
        }
    }


    return 0;
}
