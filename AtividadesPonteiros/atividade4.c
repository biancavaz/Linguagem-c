#include <stdio.h>

int main (){

   float matriz [3][3];

   printf("O endereco de cada posicao da matriz:");
   for (int i=0; i<3; i++){
    for (int j=0; j<3; j++) {
        printf("\n %p", &matriz[i][j]);
        }
   }
}
