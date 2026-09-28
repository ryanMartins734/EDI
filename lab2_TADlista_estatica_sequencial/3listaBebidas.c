#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "5listaBebidas.h"
#define MAX 10000

struct bebida {

    char nome[20];
    int volume;
    float preco;

};

struct lista {

    bebida no[MAX];
    int fim;

};

Lista criar_lista() {

    Lista lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL) lst->fim = 0;

}

int lista_vazia(Lista lst) {

    if(lst == NULL) return -1;
    if(lst->fim == 0) return 1;
    return 0;

} 

int lista_cheia(Lista lst) {

    if(lst == NULL) return -1;
    if(lst->fim == MAX) return 1;
    return 0;

}

int inserirRegistro(Lista lst, char nome[], int volume, float preco) {

    if(lst == NULL) return -1;
    if(lista_cheia(lst)) return 0;

    strcpy(lst->no[lst->fim].nome, nome);
    lst->no[lst->fim].volume = volume;
    lst->no[lst->fim].preco = preco;

    lst->fim++;

    return 1;

}

int apagarUltimoRegistro(Lista lst) {

    if(lst == NULL) return -1;
    if(lista_vazia(lst)) return 0;
    
    lst->fim--;
    return 1;

}

int imprimirTabela(Lista lst) {

    if(lst == NULL) return -1;
    if(lista_vazia(lst)) return 0;

    printf("\nTABELA DE BEBIDAS\n");

    for(int i=0;i<lst->fim;i++) {

        printf("\nBebida %d",i+1);
        printf("\nNome: %s",lst->no[i].nome);
        printf("\nVolume: %dml",lst->no[i].volume);
        printf("\nNome: R$%.2f\n",lst->no[i].preco);

    }

    return 1;

}