#include <stdio.h>

int main () {

    int var1, var2;

    printf("Informe a váriavel 1: ");
    scanf("%d", &var1);

    printf("Informe a váriavel 2:");
    scanf ("%d", &var2);

    if (var1 > var2) {
        printf("O valor da váriavel 1 é \n%d", var1);
    } else if (var1 < var2) {
        printf("Endereco do valor 2 e maior\n%d", var2);
    } else {
        printf("Endereco iguais");
    }
}