#include <stdio.h>

int main (){
    char str [20] = "bora bil";

    // entrada de dados
   printf("Digite um nome: ");
   // armazena os dados
   scanf("%s", str);


   // aqui ele puxa só os 4 primeiros número(.4)
   printf(" Mostre os caracteres %.4s\n", str);

    return 0;
}