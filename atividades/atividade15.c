#include <stdio.h>

int main (){

    int num;
    float num2;
    char let; 

    printf ("Informe um número: ");
    scanf ("%i", &num);

    printf ("Informe um número: ");
    scanf (" %f", &num2);

    printf ("Informe uma letra: ");
    scanf (" %c", &let);

    printf ("\nVariáveis separadas: ");
    printf ("%i   %.0f   %c", num, num2, let);
    printf ("\n\nVariáveis por tabulação: ");
    printf("\nLetras digitadas:\n");
    printf("Letra 1:\t%i\n", num); 
    printf("Letra 2:\t%.0f\n", num2); 
    printf("Letra 3:\t%c\n", let);

    printf ("\nVariáveis uma em cada linha: \n");
    printf ("%i\n%.0f\n%c\n", num, num2, let);

}