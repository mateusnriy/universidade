/*Receber uma matriz A[6][6] e retornar o menor elemento da sua diagonal 
secundária, mostrando a posição em que ele está armazenado.*/

#include <stdio.h>
#define TAM 6

int main () {

    int i = 0, j = 0;
    float mat[TAM][TAM], menor = 0;
    
    printf("\n+-------------------------------+\n");
    printf("|  Digite os valores da matriz  |\n");
    printf("+-------------------------------+\n");

    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++) {
            
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);

        }
    }
    
    printf("\n+-------------------------------+");
    for (i = 0; i < TAM; i++) {
        printf("\n|");
        for (j = 0; j < TAM; j++){
            
            printf("\t%.f", mat[i][j]);

        }
        printf("\t|");
    }
    printf("\n+-------------------------------+\n");


    for (i = 0; i < TAM; i++) {

        for (j = 0; j < TAM; j++){
            
            if (i + j == TAM - 1) {

                if (menor == 0 || mat[i][j] < menor) {

                    menor = mat[i][j];
                    printf("\nPosicao = %d%d", i, j);
                    
                }
            }

        }
    }

    printf("\nMenor elemento da sua diagonal secundaria: %.f", menor);

    return 0;
}