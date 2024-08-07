#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    float d;

    struct ponto{
        int x;
        int y;
    } p1, p2, p3, p4;

    printf("\n--- Ponto 1 ---");
    printf("\n--- cordenada x:");
    scanf("%d", &p1.x);

    printf("\n--- Ponto 2---");
    printf("\n--- cordenada y:");
    scanf("%d", &p2.y);

    d = sqrt(pow ((p2.x - p1.x),2) + pow ((p2.y - p1.y), 2));
    printf("\n Distancia entre os pontos: %.2f\n\n", d);
}