/*
Faça um algoritmo para realizar a multiplicação de matrizes A e B e 
armazenar o resultado na matriz C, ao final, mostrar as 3 matrizes!
C(m x p) = A(m x n) X B(n x p)
*/

#include <stdio.h>

int main() {

    int i, j, linhaA, colunaA, linhaB, colunaB;

    printf("\nInforme o numero da linha para Matriz A: ");
    scanf("%d", &linhaA);
    printf("Informe o numero da coluna para Matriz A: ");
    scanf("%d", &colunaA);
    
    printf("\nInforme o numero da linha para Matriz B: ");
    scanf("%d", &linhaB);
    printf("Informe o numero da coluna para Matriz B: ");
    scanf("%d", &colunaB);

    float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizC[linhaA][colunaB];

    for (i = 0; i < linhaA; i++) {

        for (j = 0; j < colunaA; j++) {

            printf("\nInforme os valores da matrizA[%d][%d]: ", i, j);
            scanf("%f", &matrizA[i][j]);

        }
    }

    for (i = 0; i < linhaB; i++) {

        for (j = 0; j < colunaB; j++) {

            printf("\nInforme os valores da matrizB[%d][%d]: ", i, j);
            scanf("%f", &matrizB[i][j]);

        }
    }

    for (i = 0; i < linhaA; i++) {

        for (j = 0; j < colunaB; j++) {

            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];

        }
    }

    for (i = 0; i < linhaA; i++) {
        printf("\n");
        for (j = 0; j < colunaB; j++) {

            printf("\t%.f", matrizC[i][j]);

        }
    }
    
    return 0;
}
