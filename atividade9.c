#include <stdio.h>

int main (){

float num1[2];

for(int cont=0; cont<2; cont++){
    printf("Informe um numero: ");
    scanf ("%f", &num1[cont]); 
}
    printf("\nOrdem inversa: %.0f", num1[1]);
    printf("\nOrdem inversa: %.0f", num1[0]);
    
}