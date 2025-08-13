#include <stdio.h>
#define TAM 3

int main () {

    int i = 0, j = 0;
    float mat [TAM][TAM], num = 0;

    printf("\n+-------------------------------+\n");
    printf("|  Digite os valores da matriz  |\n");
    printf("+-------------------------------+\n");

    

    for (i = 0; i < TAM; i++) {
        
        for (j = 0; j < TAM; j++) {

            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);

        }
        
    }

    printf("\nInforme o numero mutiplicador: ");
    scanf("%f", &num);
    
    for (i = 0; i < TAM; i++) {
        
        for (j = 0; j < TAM; j++) {

            mat[i][j] *= num;

        }
        
    }

    printf("\n+-------------------------------+\n");
    printf("|      RESULTADO DA MATRIZ      |\n");
    printf("+-------------------------------+");

    for (i = 0; i < TAM; i++) {
        
        printf("\n|");

        for (j = 0; j < TAM; j++) {

            printf("\t%.f", mat[i][j]);

        }
        printf("\t|");
        
    }
    printf("\n+-------------------------------+\n");
    return 0;
}