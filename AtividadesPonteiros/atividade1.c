#include <stdio.h>

int main () {

    int var1 = 10, var2 = 15;

    if (&var1 > &var2) {
        printf("Endereço do valor 1 e maior \n");
        printf("Local alocado na memória para a variável 1: %d", &var1);
    } else if (&var1 < &var2) {
        printf("Endereco do valor 2 e maior\n");
    } else {
        printf("Endereco iguais");
    }
}