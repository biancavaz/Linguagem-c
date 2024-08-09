#include <stdio.h>

int main () {

    struct informacoes {
    char nome[15];
    char endereco[20];
    int idade;
} n, e, i;

    printf("Informe seu nome: ");
    scanf("%s", n.nome);

    printf("Informe seu Endereço: ");
    scanf("%s", e.endereco);

    printf("Informe sua idade: ");
    scanf("%i", &i.idade);
    getchar();


    printf("\nNome: %s", n.nome);
    printf("\nEndereco: %s", e.endereco);
    printf("\nidade: %i", i.idade);




}