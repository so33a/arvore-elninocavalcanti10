#ifndef ARVORE_H
#define ARVORE_H

typedef struct node * link;
struct node {
  link left;
  link right;
  int key;
};

typedef struct arvore {
  link raiz;
  link z;
} * ARVORE;

ARVORE novaArvore();
link busca (ARVORE a, int key);
link rotR(ARVORE a, link h);
link rotL(ARVORE a, link h);
void inserir (ARVORE a, int key);
void inserirNaRaiz (ARVORE a, int key);

void remover(ARVORE a, int key);
link removerNo(ARVORE a, link h, int key);
void imprimeEmOrdem(ARVORE a);
void imprimePosOrdem(ARVORE a);
void imprimePreOrdem(ARVORE a);
void imprimeEmLargura(ARVORE a);
void destroiArvore(ARVORE a);
void destroiArvoreR(ARVORE a, link h);
link buscaMenorR(ARVORE a, link h);
#endif
