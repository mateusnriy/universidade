#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct No {
    char *nome;
    int matricula;
    struct No *anterior;
    struct No *proximo;
} No;

No* criarLista();
No* inserir(No *lista, int mat, const char *nome); 
No* remover(No *lista, int mat);
No* buscarMatricula(No *lista, int mat);
No* buscarNome(No *lista, const char *nome); 
int tamanho(No *lista);
void exibir(No *lista);

#endif