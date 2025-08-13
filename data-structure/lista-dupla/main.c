#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int main()
{
    int escolha = 0;
    No *lista = criarLista(); //criar a lista.

    while (1)
    { // Loop infinito para manter o programa rodando
        printf("\n+-------------------------------------------+\n");
        printf("|        BANCO DE DADOS DE MATRICULA        |\n");
        printf("+-------------------------------------------+\n");
        printf("|1. Inserir aluno na lista                  |\n");
        printf("|2. Remover aluno da lista                  |\n");
        printf("|3. Buscar pela matricula o aluno na lista  |\n");
        printf("|4. Buscar pelo nome do aluno na lista      |\n");
        printf("|5. Tamanho da lista de alunos              |\n");
        printf("|5. Exibir lista                            |\n");
        printf("|7. Sair                                    |\n");
        printf("+-------------------------------------------+\n");

        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
        {

            int matricula;
            char nome[100];

            printf("Digite a matrícula do aluno: ");
            scanf("%d", &matricula);
            printf("Digite o nome do aluno: ");
            scanf(" %[^\n]", nome);

            lista = inserir(lista, matricula, nome); // Insere o aluno na lista
            printf("Aluno inserido com sucesso!\n");
            break;
        }

        case 2:
        {

            int matricula;

            printf("Digite a matrícula do aluno a ser removido: ");
            scanf("%d", &matricula);

            lista = remover(lista, matricula); // Remove o aluno da lista
            break;
        }

        case 3:
        {

            int matricula;

            printf("Digite a matrícula do aluno a ser buscado: ");
            scanf("%d", &matricula);

            No *aluno = buscarMatricula(lista, matricula); // Busca pela matricula
            if (aluno != NULL)
            {
                printf("Aluno encontrado: %s (Matrícula: %d)\n", aluno->nome, aluno->matricula);
            }
            break;
        }

        case 4:
        {

            char nome[100];

            printf("Digite o nome do aluno a ser buscado: ");
            scanf(" %[^\n]", nome);

            No *aluno = buscarNome(lista, nome); // Busca o aluno
            if (aluno != NULL)
            {
                printf("Aluno encontrado: %s (Matrícula: %d)\n", aluno->nome, aluno->matricula);
            }
            break;
        }

        case 5:
        {

            int tam = tamanho(lista);
            printf("Tamanho da lista: %d\n", tam);
            break;
        }

        case 6:
        {
            exibir(lista);
            break;
        }

        case 7:
        {

            printf("Saindo...\n");
            return 0;
        }

        default:
        {
            printf("\nOpção inválida!\n");
            break;
        }
        }
    }

    return 0;
}