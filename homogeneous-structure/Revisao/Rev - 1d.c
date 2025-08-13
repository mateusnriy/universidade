/*
- Escreva um algoritmo que leia um vetor de 13 elementos inteiros, que é o Gabarito de um teste da loteria esportiva, 
contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). 

- Leia, a seguir, para cada um dos 100 apostadores, o número do seu cartão e um vetor de Respostas de 13 posições. 

- Verifique para cada apostador o número de acertos, comparando o vetor de Gabarito com o vetor de Respostas. 

- Escreva o número do apostador e o número de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "Ganhador". 
*/

#include <stdio.h>
#define TAM 13

int main () {

    int i, vetor[TAM];

    for (i = 0; i < TAM; i++) {

        printf("\nInforme os valores do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

    }


    


    return 0;
}

