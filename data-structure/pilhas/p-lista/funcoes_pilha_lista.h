#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct No {
    int dado;
    struct No *prox;
}no;

typedef struct Pilha {
    no *lista;
}pilha;

struct Pilha *criar();

int push(struct Pilha *p, int num);

int pop(struct Pilha *p, int *num);

int top(struct Pilha *p, int *num);

int imprimir(struct Pilha *p);

void destruir(struct Pilha *p);

#endif