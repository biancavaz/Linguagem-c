#include <stdio.h>

int funcao (float raio){
    return (4/3*raio*3,14*(raio*raio*raio));
}

int main () {

    float raio, volume;

    printf("Informe o raio: ");
    scanf("%f", &raio);

    volume = funcao(raio);

    printf("O volume da esfera é: %2.f", volume);

}