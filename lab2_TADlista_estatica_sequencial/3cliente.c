#include <stdio.h>
#include <stdlib.h>
#include "5listaBebidas.h"

int main() {

    Lista lista = NULL;
    int opcao,volume,r;
    float preco;
    char nome[20];
    
    lista = criar_lista();

    do {

        printf("\nMenu de opcoes: ");
        printf("\n1. Inserir registro.");
        printf("\n2. Apagar ultimo registro.");
        printf("\n3. Imprimir tabela.");
        printf("\n4. Sair.");
        printf("\nDigite oma opcao: ");
        scanf("%d",&opcao);

        if(opcao == 1) {

            printf("\nNome da bebida: ");
            scanf(" %s",&nome);
            printf("\nVolume em ml: ");
            scanf("%d",&volume);
            printf("\nPreco: ");
            scanf("%f",&preco);

            r = inserirRegistro(lista,nome,volume,preco);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nNao foi possivel inserir registro: Lista esta cheia!\n");
            else printf("\nRegistro inserido!\n");

        }

        if(opcao == 2) {

            r = apagarUltimoRegistro(lista);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nNao foi possivel apagar ultimo registro: Lista esta vazia!\n");
            else printf("\nUltimo registro apagado!\n");

        }

        if(opcao == 3) {

            r = imprimirTabela(lista);

            if(r == -1) printf("\nERRO: Lista nao foi criada!\n");
            else if(r == 0) printf("\nLista esta vazia!\n");
            
        }

    } while(opcao != 4);

    free(lista);

    return 0;
}