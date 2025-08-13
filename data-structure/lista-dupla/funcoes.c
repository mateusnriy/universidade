#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

No* criarLista() {
    return NULL;
}

No* inserir(No *lista, int mat, const char *nome) {
    if (nome == NULL) {
        printf("Nome inválido!\n");
        return lista;
    }

    No *novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return lista;
    }

    novo->nome = (char*)malloc(strlen(nome) + 1);
    if (novo->nome == NULL) {
        printf("Erro ao alocar memória!\n");
        free(novo);
        return lista;
    }

    strcpy(novo->nome, nome);
    novo->matricula = mat;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if (lista == NULL) {
        return novo;
    }

    No *atual = lista;
    No *anterior = NULL;

    while (atual != NULL && strcmp(novo->nome, atual->nome) > 0) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (anterior == NULL) {
        novo->proximo = lista;
        lista->anterior = novo;
        return novo;
    }

    novo->proximo = atual;
    novo->anterior = anterior;
    anterior->proximo = novo;

    if (atual != NULL) {
        atual->anterior = novo;
    }

    return lista;
}

No* remover(No *lista, int mat) {
    if (lista == NULL) {
        printf("Lista vazia. Nada a remover.\n");
        return lista;
    }

    No *atual = lista;

    while (atual != NULL && atual->matricula != mat) {
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Matricula %d não encontrada na lista.\n", mat);
        return lista;
    }

    if (atual == lista) {
        lista = atual->proximo;
        if (lista != NULL) {
            lista->anterior = NULL;
        }
    } else {
        if (atual->anterior != NULL) {
            atual->anterior->proximo = atual->proximo;
        }
        if (atual->proximo != NULL) {
            atual->proximo->anterior = atual->anterior;
        }
    }

    free(atual->nome);
    free(atual);

    return lista;
}

No* buscarMatricula(No *lista, int mat) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    const No *atual = lista;

    while (atual != NULL) {
        if (atual->matricula == mat) {
            printf("Nome: %s\nMatrícula: %d\n", atual->nome, atual->matricula);
            return (No*)atual;
        }
        atual = atual->proximo;
    }

    printf("Matrícula %d não encontrada na lista.\n", mat);
    return NULL;
}

No* buscarNome(No *lista, const char *nome) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    No *atual = lista;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            printf("Nome: %s\nMatrícula: %d\n", atual->nome, atual->matricula);
            return atual;
        }
        atual = atual->proximo;
    }

    printf("Nome '%s' não encontrado na lista.\n", nome);
    return NULL;
}

int tamanho(No *lista) {
    int contador = 0;
    const No *atual = lista;
    while (atual != NULL) {
        contador++;
        atual = atual->proximo;
    }
    return contador;
}

void exibir(No *lista) {
    printf("Lista: ");
    while (lista != NULL) {
        printf("[%d, %s] <-> ", lista->matricula, lista->nome);
        lista = lista->proximo;
    }
    printf("NULL\n");
}