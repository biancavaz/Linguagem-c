#include <stdio.h>

int funcao ( float raio, float altura) {

    return (3,14*(raio*raio)*altura);
}

int main () {

    float raio, altura, volume;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    volume = funcao(raio, altura);

    printf("O volume é: %2.f", volume);

}