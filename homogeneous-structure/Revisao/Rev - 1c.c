//Escreva um algoritmo que leia os vetores Op1, Op2 e Op, com 30 posições.

/*Em Op1 e Op2 você deve armazenar números inteiros >= a zero, digitados pelo 
usuário, e em Op você deve armazenar +, -, * ou /.*/

/*O seu programa deve calcular o valor de Op1 Op Op2 correspondentes ao mesmo índice 
em cada um dos vetores e armazenar o resultado em um quarto vetor.*/

//Ao final mostre cada operação realizada, com o respectivo resultado.

#include <stdio.h>
#define TAM 30

int main () {

    int i, Op[TAM], Op1[TAM], Op2[TAM];
    float result[TAM];

    for (i = 0; i < TAM; i++) {
        
        printf("Informes numeros inteiros para o Op1[%d]: ", i);
        scanf("%d", &Op1[i]);

    }

    printf("\n");

    for (i = 0; i < TAM; i++) {

        printf("Informe numeros inteiros para o Op2[%d]: ", i);
        scanf("%d", &Op2[i]);
        
    }

    printf("\n");
    printf("1[+], 2[-], 3[*] ou 4[/]\n");

    for (i = 0; i < TAM; i++) {

        printf("Informe os operadores para o Op[%d]: ", i);
        scanf("%d", &Op[i]);
        
    }

    printf("\n");

    for (i = 0; i < TAM; i++) {

        switch (Op[i]) {

        case 1:
            result[i] = Op1[i]+Op2[i];
            printf("\nResultado[%d] = %d+%d", i, Op1[i], Op2[i]);
            break;
        
        case 2:
            result[i] = Op1[i]-Op2[i];
            printf("\nResultado[%d] = %d-%d", i, Op1[i], Op2[i]);
            break;

        case 3:
            result[i] = Op1[i]*Op2[i];
            printf("\nResultado[%d] = %d*%d", i, Op1[i], Op2[i]);
            break;

        case 4:
            result[i] = Op1[i]/Op2[i];
            printf("\nResultado[%d] = %d/%d", i, Op1[i], Op2[i]);
            break;

        default:
            printf("\nEscolha invaida!");
            break;
        }
    }


    for (i = 0; i < TAM; i++) {

        printf("\nResultado = %.f", result[i]);
        
    }

    return 0;
}
