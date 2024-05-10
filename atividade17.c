#include <stdio.h>

int main () {

    int num, num2, num3, media;

    printf ("Informe um número: ");
    scanf ("%i", &num);

    printf ("Informe um número: ");
    scanf (" %i", &num2);

    printf ("Informe um número: ");
    scanf (" %i", &num3);

    media =  (num + num2 +num3)/3; 

    printf ("A media é: %i", media);
}