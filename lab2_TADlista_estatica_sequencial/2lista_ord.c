#include "4lista_ord.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 20

struct lista {

    int vet[MAX];
    int fim;

};

Lista criar_lista() {

    Lista lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL) lst->fim = 0;

}

int lista_vazia(Lista lst) {

    if(lst == NULL) return -1;
    else if(lst->fim == 0) return 1;
    else return 0;

}

int lista_cheia(Lista lst) {

    if(lst == NULL) return -1;
    else if(lst->fim == MAX) return 1;
    else return 0;
}

int insere_ord(Lista lst, int elem) {

    if(lst == NULL) return -1;
    else if(lista_cheia(lst)) return 0;
    else {

        int i;
        for(i=lst->fim-1;i>=0;i--) {

            lst->vet[i+1] = lst->vet[i];

            if(lst->vet[i] <= elem) break;

        }

        lst->vet[i+1] = elem;
        
        lst->fim++;

        return 1;
    
    } 

}

int remove_ord(Lista lst,int elem) {

    if(lst == NULL) return -1;
    else if(lista_vazia(lst)) return 0;
    else {

        int achouElem = 0;

        for(int i=0;i<lst->fim;i++) {

            if(achouElem) lst->vet[i-1] = lst->vet[i];
            else { 
                if(lst->vet[i] == elem) achouElem = 1;
                if(lst->vet[i] > elem) break;
            }

        }

        if(achouElem) {
            lst->fim--;
            return 1;
        } 
        
        // Se elem nao esta na lista
        return 2;

    }

}

int obtem_valor_elem(Lista lst, int pos, int *elem) {

    if(lst == NULL) return -1;
    else if(lista_vazia(lst)) return 0;
    else if(pos >= lst->fim || pos < 0) return 2;
    else {

        *elem = lst->vet[pos];

        return 1;

    }

}

int imprime_lista(Lista lst) {

    if(lst == NULL) return 0;
    else {    

        printf("\n");
        for(int i=0;i<lst->fim;i++) printf("%d ",(lst->vet[i]));
        printf("\n");

        return 1;

    }

}