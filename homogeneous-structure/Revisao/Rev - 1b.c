/*Escrever um algoritmo que gera os 10 primeiros números primos acima de 100 
e os armazena em um vetor de X[10] escrevendo, no final, o vetor X.*/

#include <stdio.h>
#define TAM 10

int main () {

    int i, j = 0, num = 101, cont = 0;
    float x[TAM];

    while (j < TAM) {

        cont = 0;

        for (i = 1; i <= num; i++) {

            if (num % i == 0) {
                cont++;
            }
        }
        
        if(cont <= 2) {

            x[j] = num;
            j++;

        } 
        num++;
        printf("\nNum = %d, j = %d", num, j);

    }

    printf("\nOs dez primeiros numeros primos acima de 100: ");
    for (i = 0; i < TAM; i++) {
        
        printf("\n%.f", x[i]);

    }
 
    return 0;
}

