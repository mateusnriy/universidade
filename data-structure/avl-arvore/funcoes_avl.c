#include <stdio.h>
#include <stdlib.h>
#include "funcoes_avl.h"

// Função que calcula a altura de um nó
int altura(struct No *no) {
    if (no == NULL) {
        return -1;
    }
    
    int altura_esq = altura(no->fesq);
    int altura_dir = altura(no->fdir);
    
    return (altura_esq > altura_dir ? altura_esq : altura_dir) + 1;
}

int calcularFB(struct No *no) {
    if (no == NULL) {
        return 0;
    }
    return altura(no->fdir) - altura(no->fesq);
}

struct No *rotacaoDireita(struct No *y) {
    struct No *x = y->fesq;
    struct No *T2 = x->fdir;
    
    // Realizar a rotação
    x->fdir = y;
    y->fesq = T2;
    
    // Atualizar os fatores de balanceamento
    y->FB = calcularFB(y);
    x->FB = calcularFB(x);
    
    return x;
}

struct No *rotacaoEsquerda(struct No *x) {
    struct No *y = x->fdir;
    struct No *T2 = y->fesq;
    
    // Realizar a rotação
    y->fesq = x;
    x->fdir = T2;
    
    // Atualizar os fatores de balanceamento
    x->FB = calcularFB(x);
    y->FB = calcularFB(y);

    return y;
}

struct No *inserir(struct No *arv, int num) {

    if (arv == NULL) {
      
        struct No *novo = (struct No *)malloc(sizeof(struct No));
        if (novo == NULL) {
            return NULL; 
        }
        
        novo->num = num;
        novo->FB = 0; 
        novo->fesq = NULL;
        novo->fdir = NULL;
        
        return novo;
    }
    
    // Continuar a busca pelo ponto de inserção
    if (num < arv->num) {
        arv->fesq = inserir(arv->fesq, num);
    }
    else if (num > arv->num) {
        arv->fdir = inserir(arv->fdir, num);
    }
    else {
        return arv;
    }

    arv->FB = calcularFB(arv);
    
    // Caso FB = -2 
    if (arv->FB == -2) {
        // Verificar o FB do filho esquerdo para determinar o tipo de rotação
        if (calcularFB(arv->fesq) <= 0) {
            return rotacaoDireita(arv);
        } else {
            arv->fesq = rotacaoEsquerda(arv->fesq);
            return rotacaoDireita(arv);
        }
    }
    
    // Caso FB = +2 
    if (arv->FB == 2) {
        // Verificar o FB do filho direito para determinar o tipo de rotação
        if (calcularFB(arv->fdir) >= 0) {
            return rotacaoEsquerda(arv);
        } else {
            arv->fdir = rotacaoDireita(arv->fdir);
            return rotacaoEsquerda(arv);
        }
    }
    
    return arv;
}

struct No* encontrarMin(struct No *no) {
    struct No* atual = no;
    
    while (atual && atual->fesq != NULL) {
        atual = atual->fesq;
    }
    
    return atual;
}

struct No *remover(struct No *arv, int num) {

    if (arv == NULL) {
        return NULL; 
    }
    
    // Buscar o nó a ser removido
    if (num < arv->num) {
        arv->fesq = remover(arv->fesq, num);
    } 
    else if (num > arv->num) {
        arv->fdir = remover(arv->fdir, num);
    }
    else {
        if (arv->fesq == NULL && arv->fdir == NULL) {
            free(arv);
            return NULL;
        }
        else if (arv->fesq == NULL) {
            struct No *temp = arv->fdir;
            free(arv);
            return temp;
        }
        else if (arv->fdir == NULL) {
            struct No *temp = arv->fesq;
            free(arv);
            return temp;
        }
        else {
            struct No *temp = encontrarMin(arv->fdir);
            arv->num = temp->num;
            arv->fdir = remover(arv->fdir, temp->num);
        }
    }
    
    if (arv == NULL) {
        return NULL;
    }
    
    arv->FB = calcularFB(arv); 
    
    // Caso FB = -2 
    if (arv->FB == -2) {
        int fbFilhoEsq = calcularFB(arv->fesq);
        
        // Verificar o FB do filho esquerdo para determinar o tipo de rotação
        if (fbFilhoEsq <= 0) {
            
            return rotacaoDireita(arv);
        } else {
           
            arv->fesq = rotacaoEsquerda(arv->fesq);
            return rotacaoDireita(arv);
        }
    }
    
    // Caso FB = +2 
    if (arv->FB == 2) {
        int fbFilhoDir = calcularFB(arv->fdir);
        
        // Verificar o FB do filho direito para determinar o tipo de rotação
        if (fbFilhoDir >= 0) {
            return rotacaoEsquerda(arv);
        } else {
            arv->fdir = rotacaoDireita(arv->fdir);
            return rotacaoEsquerda(arv);
        }
    }
    
    return arv;
}
