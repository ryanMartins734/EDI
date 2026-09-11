#include "2ponto.h"
#include <stdlib.h>
#include <math.h>

/*

TAD: ponto

Dados: 2 números inteiros, representando o eixo x e o eixo y do ponto
Lista de operações: criaPto, liberaPto, distanciaPto

Especificação das operações:

1 - criaPto

Entrada: pX e pY
Pré-Condição: nenhuma
Processo: gera um ponto com x = pX e y = pY
Saída: endereço do ponto
Pós-Condição: 


2 - liberaPto

Entrada: endereço do ponto
Pré-Condição: nenhuma
Processo: libera espaço de memória usado pelo ponto e limpa seu endereço
Saída: nenhuma
Pós-Condição: ponto liberado


3 - distanciaPto

Entrada: endereço do ponto 1 (p1) e do ponto 2 (p2)
Pré-Condição: ponto 1 e ponto 2 sejam validos

Processo: calcula a distancia (d) entre os pontos:

d = sqrt[(|p1.x - p2.x|)^2 + (|p1.y - p2.y|)^2]

Saída: distancia entre os dois pontos ou -1 quando der falha
Pós-Condição: Nenhuma

*/

struct ponto {
    int x,y;
};

ponto* criaPto(int pX,int pY) {

    ponto *p = (ponto*)malloc(sizeof(ponto));

    p->x = pX;
    p->y = pY;

    return p;

}

void liberaPto(ponto *p) {

    free(p);
    p = NULL;

}

double distanciaPto(ponto *p1,ponto *p2) {

    int difX,difY;
    double distancia;

    if(p1 == NULL || p2 == NULL) return -1;
    else {

        difX = abs(p1->x - p2->x);
        difY = abs(p1->y - p2->y);
        
        distancia = sqrt((difX * difX) + (difY * difY));

        return distancia;

    }

}
