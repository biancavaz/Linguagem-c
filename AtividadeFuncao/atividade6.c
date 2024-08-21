#include <stdio.h>


int funcao (float peso, float altura) {
    return peso / (altura*altura);
}

int main () {

    float peso, altura, imc;

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = funcao(peso, altura);

    printf("O IMC dessa pessoa é: %2.f", imc);

}