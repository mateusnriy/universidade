
#include <stdio.h>

typedef struct No
{
    int chave;
    struct No *filho_esq;
    struct No *filho_dir;
}no;

no *criar(){
    return NULL;
}

no *inserir (no *arv, int num) 
{   
    no *novo = (no*)malloc(sizeof(no));
    no *aux = arv;
    if (novo == NULL){
        printf("Erro ao a   locar memória");
        return novo;
    }

    novo->chave = num;
    novo->filho_dir = NULL;
    novo->filho_esq = NULL;

    if (arv == NULL) {
        return novo;    
    }

    while (arv != NULL)
    {
        if (num < aux->chave)
        {
            if(aux->filho_esq != NULL){
                aux = aux->filho_esq;
            } else {
                aux->filho_esq = novo;
                return arv;
            }

        } else {
            if (aux->filho_dir != NULL)
            {
                aux = aux->filho_dir;
            } else {
                aux->filho_dir = novo;
                return arv;
            }

        }

    }
    
}