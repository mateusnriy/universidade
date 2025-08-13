#ifndef FUNCOES_H_
#define FUNCOES_H_

struct No {
    int num;
    int FB;
    struct No *fesq;
    struct No *fdir;
};

int altura(struct No *no);
int calcularFB(struct No *no);
struct No *rotacaoDireita(struct No *y);
struct No *rotacaoEsquerda(struct No *x);
struct No * inserir(struct No *arv, int num);
struct No * remover(struct No *arv, int num);

#endif