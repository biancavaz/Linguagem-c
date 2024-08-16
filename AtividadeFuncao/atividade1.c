#include <stdio.h>
#include <stdlib.h>11

int funcao (int num1,int num2) {

    if ( num1 > num2){
        return num1;
    } else {
        return num2;
    }
}

int main () {

int a, b;

    printf("Digite o primeiro numero");
    scanf("%i", &a);

    printf("Digite o segundo numero");
    scanf("%i", &b);

    printf("O maior número é: %i", funcao(a, b));

    return 0;

}
