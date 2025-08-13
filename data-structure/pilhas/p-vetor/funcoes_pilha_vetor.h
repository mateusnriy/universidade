#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct Pilha{
    int tam;
    int topo;
    int *vet;
}pilha;

struct Pilha *criar(int tam); 

int push(struct Pilha *p, int num);

int pop(struct Pilha *p, int *num);

int top(struct Pilha *p, int *num);

int imprimir(struct Pilha *p);

void destruir(struct Pilha *p);

#endif