#include <stdio.h>

int main () {

    int num, num2, soma;

    printf ("Informe um número: ");
    scanf ("%i", &num);

    printf ("Informe um número: ");
    scanf (" %i", &num2);

    soma =  num + num2; 

    printf ("A soma é: %i", soma);
}