#include <stdio.h>
#include "2ponto.h"

int main() {

    int x,y;
    ponto *p1,*p2;
    double distancia;

    printf("x do ponto 1: ");
    scanf("%d",&x);
    printf("y do ponto 1: ");
    scanf("%d",&y);

    p1 = criaPto(x,y);
    
    printf("x do ponto 2: ");
    scanf("%d",&x);
    printf("y do ponto 2: ");
    scanf("%d",&y);

    p2 = criaPto(x,y);

    distancia = distanciaPto(p1,p2);

    if(distancia == -1) {
        printf("\nErro: Não foi possivel calcular a distancia.");
        return -1;
    } 

    printf("\nDistancia entre os dois pontos: %lf",distancia);

    liberaPto(p1);
    liberaPto(p2);

    return 0;

}
