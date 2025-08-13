/*Leia um vetor de 50 posições e o compacte, ou seja, elimine as posições com 
valor zero avançando uma posição, com os valores subsequentes do 
vetor. Dessa forma todos “zeros” devem ficar para as posições finais do vetor.*/

#include <stdio.h>
#define TAM 50

int main () {

    int i = 0, j = 0;
    float vet[TAM];

    for (i = 0; i < TAM; i++) {

        printf("\nInforme um numero para o vetor[%d]: ", i);
        scanf("%f", &vet[i]);

    }
    
    for (i = 0; i < TAM; i++) {

        if (vet[i] != 0) {
    
            vet[j] = vet[i];
            j++;
        }
        
    }

    for (j = j; j < TAM; j++) {
        
        vet[j] = 0;

    }
    
    for (i = 0; i < TAM; i++) {
        
        printf("\nVetor[%d] = %.f", i, vet[i]);

    }

    return 0;
}