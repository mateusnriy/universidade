#include <stdio.h>
#define TAM 4

int main () {

    int i = 0, j = 0;
    float mat[TAM][TAM];

    for (i = 0; i < TAM; i++) {
        
        for (j = 0; j < TAM; j++) {

            if (i < j) {
                
                mat[i][j] = 2*i + 7*j - 2;

            }
            if (i == j) {

                mat[i][j] = 3*i - 1;
            
            }
            
            if (i > j) {

                mat[i][j] = 4*i - 5*j*2;

            }

        }

    }
    
    printf("\n+---------------------------------------+\n");
    printf("|              Matriz 4x4:              |");
    printf("\n+---------------------------------------+");

    for (i = 0; i < 4; i++) {
        printf("\n|");
        for (j = 0; j < TAM; j++) {
            printf("\t%.f", mat[i][j]);
        }
        printf("\t|");
    }
    printf("\n+---------------------------------------+\n");

    return 0;
}