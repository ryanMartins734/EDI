#include <stdio.h>
#include <stdlib.h>
#include "3lista_nOrd.h"

int main() {

    int opcao,elem,pos,r;
    Lista lista = NULL;
    
    do {

        printf("\nMenu de opcoes: ");
        printf("\n1. Criar lista.");
        printf("\n2. Inserir elemento.");
        printf("\n3. Remover primeira aparicao de elemento.");
        printf("\n4. Imprimir lista.");
        printf("\n5. Obter elemento em determinada posicao.");
        printf("\n6. Sair.");
        printf("\nDigite oma opcao: ");
        scanf("%d",&opcao);

        if(opcao == 1) {

            lista = criar_lista();

        }

        if(opcao == 2) {

            printf("\nElemento: ");
            scanf("%d",&elem);

            r = insere_elem(lista,elem);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nNao foi possivel inserir elemento: Lista esta cheia!\n");
            else printf("\nElemento inserido!\n");

        }

        if(opcao == 3) {

            printf("\nElemento: ");
            scanf("%d",&elem);

            r = remove_elem(lista,elem);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nNao foi possivel deletar elemento: Lista esta vazia!\n");
            else if(r == 2) printf("\nNao foi possivel deletar elemento: Elemento nao esta na lista!\n");
            else printf("\nElemento removido!\n");

        }

        if(opcao == 4) {

            if(!imprime_lista(lista)) printf("\nERRO: Lista nao foi criada!\n");

        }

        if(opcao == 5) {
            
            printf("\nPosicao: ");
            scanf("%d",&pos);

            r = obtem_valor_elem(lista,pos,&elem);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nNao foi possivel achar elemento: Lista esta vazia!\n");
            else if(r == 2) printf("\nNao foi possivel achar o elemento: posicao nao existe na lista!\n");
            else printf("\nElemento na posicao %d: %d",pos,elem);       

        }

    } while(opcao != 6);

    free(lista);

    return 0;
}