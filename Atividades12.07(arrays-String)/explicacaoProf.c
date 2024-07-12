#include <stdio.h>

int main (){
    char nome [30];

    printf("Digite um nome: ");
    gets(nome);

    printf("O nome digitado foi: %s", nome);

    return 0;
}