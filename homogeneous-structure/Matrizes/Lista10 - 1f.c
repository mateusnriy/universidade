/*
Obter e imprimir um vetor que seja a soma dos elementos de cada coluna de 
uma matriz numérica qualquer dada.
*/

#include <stdio.h>

int main () {

    int i, j, linha = 0, coluna = 0;
    float mat[linha][coluna], soma[coluna];

    printf("\n+---------------------------------------+\n");
    printf("|  Informe as dimensoes de uma materiz  |\n");
    printf("+---------------------------------------+\n");

    printf("\nQuantidade de Linhas: ");
    scanf("%d", &linha);

    printf("\nQuantidade de Colunas: ");
    scanf("%d", &coluna);

    printf("\n+-------------------------------+\n");
    printf("|  Digite os valores da matriz  |\n");
    printf("+-------------------------------+\n");

    for (i = 0; i < linha; i++) {

        for (j = 0; j < coluna; j++) {

            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);

        }
    }

    for (i = 0; i < linha; i++) {

        for (j = 0; j < coluna; j++) {

            soma[j] += mat[i][j];

        }
    }

    
    for (j = 0; j < coluna; j++) {
            
        printf("\n+-------------------------------+\n");
        printf("| Soma da coluna[%d] = %.f        |\n", j, soma[j]);
        printf("+-------------------------------+\n");

    }


    return 0;
}