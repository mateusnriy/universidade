#include <stdio.h>
#include <stdlib.h>
#include "funcoes_pilha_vetor.h"

struct Pilha *criar(int tam) {

    pilha *p = (pilha *)malloc(sizeof(pilha));

    if (p == NULL) {
        printf("Erro ao alocar memoria para a pilha.");
        return NULL;
    }

    p->tam = tam; 
    p->topo = -1; 

    p->vet = (int *)malloc(tam * sizeof(int));
    if (p->vet == NULL) {
        printf("Erro ao alocar memoria para o vetor.");
        free(p);
        return NULL;
    }
    return p;
}

int push(pilha *p, int num) {

    if (p->topo == p->tam - 1) {
        return 0;  
    }
    
    // Incrementa o topo e insere o elemento
    p->topo++;
    p->vet[p->topo] = num;
    
    return 1; 
}

int pop(pilha *p, int *num) {

    if (p->topo == -1) {
        return 0;  
    }
    
    // Copia o elemento do topo e decrementa o topo
    *num = p->vet[p->topo];
    p->topo--;
    
    return 1;  
}

int top(pilha *p, int *num) {

    if (p->topo == -1) {
        return 0;  
    }
    
    // Copia o elemento do topo
    *num = p->vet[p->topo];
    
    return 1;  

}

int imprimir(pilha *p) {

    if (p->topo == -1) {
        printf("Pilha vazia\n");
        return 0;
    }
    
    printf("Pilha (topo -> base): ");
    for (int i = p->topo; i >= 0; i--) {
        printf("%d ", p->vet[i]);
    }
    printf("\n");
    
    return 1;
}

void destruir(pilha *p) {

    if (p != NULL) {
        free(p->vet);
        free(p);       
    }

}

