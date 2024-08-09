#include <stdio.h>
#include <stdlib.h>
#include<math.h>


struct ponto {
    float x;
    float y;
};

struct retangulo {
    struct ponto pS;
    struct ponto pI;
};

int main (){

    float b, h;
    float area, perimetro, diagonal;
    struct retangulo ret;

    printf("\n--- Ponto superior esquerdo---");
    printf(" coordenada x:");
    scanf("%f", &ret.pS.x); // acessando estrutura do retangulo e ponto
    printf(" Coordenada y:");
    scanf("%f", &ret.pS.y);

    printf("\n--- Ponto inferior direito---");
    printf(" coordenada x:");
    scanf("%f", &ret.pI.x); // acessando estrutura do retangulo e ponto
    printf(" Coordenada y:");
    scanf("%f", &ret.pI.y);

     //processamento (MIX/LIQUIDFICADR
    b = ret.pI.x  - ret.pS.x; // calculo entre o ponto inferior e superior de x
    h = ret.pI.y  - ret.pI.y; // calcuo entre o ponto SUPERIOR E INFERIOR DE Y 
    
    area = b *h; //calculo de area
    perimetro = 2 * (b + h);
    diagonal = sqrt(pow(b,2) + pow (h,2));
    
    printf("\n---Resultados---");
    printf("\nArea %.2f", area);
    printf("\nPerimetro: %.2f", perimetro);
    printf("\nDiagonal: %.2f", diagonal);
    
    return 0;
}

