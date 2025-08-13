#include <stdio.h>
#include <stdlib.h>
#include "funcoes_pilha_lista.h"

struct Pilha *criar() {
    pilha *p = (pilha *) (malloc(sizeof(pilha)));
    if (p == NULL){
        printf ("Erro ao alocar memória!");
        return NULL;
    }
    p->lista = NULL;
    return p;
}

int push(struct Pilha *p, int num){
    no *novo = (no *) malloc(sizeof(no));
    if (novo == NULL){
        printf("Erro ao alocar memória!");
        return 1;
    }
    novo->dado = num;
    novo->prox = p->lista;
    p->lista = novo;
    
    return 0;
}

int pop(struct Pilha *p, int *num){
    if (p->lista == NULL){
        printf("A pilha está vazia!");
        return 0;
    }
    *num = p->lista->dado;
    no *aux = p->lista;
    p->lista = p->lista->prox;
    free (aux);
    return 1;
}

int top(struct Pilha *p, int *num){
    if (p->lista==NULL){
        printf("A pilha está vazia!");
        return 0;
    }

    *num = p->lista->dado;
    return 1;
}

int imprimir(struct Pilha *p){
    if (p->lista == NULL){
        printf("A pilha está vazia!");
        return -1;
    }
    no *printer = p->lista;

    printf("TOPO -> ");
    while (printer != NULL){
        printf("%d -> ", printer->dado);
        printer = printer->prox;
    }
    printf("NULL\n");

    return 0;
}

void destruir(struct Pilha *p){
    no *atual = p->lista;
    while (atual != NULL) {
        no *t = atual;
        atual = atual->prox;
        free(t);
    }
    free(p);
}