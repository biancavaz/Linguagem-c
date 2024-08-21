#include <stdio.h>

int funcao ( float temperatura) {

    return (temperatura - 32.0) * (5.0/9.0);
}

int main () {

    float temperatura, celcius;

    printf("Informe uma temperatura em Fahrenheit: ");
    scanf("%f", &temperatura);

    celcius = funcao(temperatura);
    
    printf("A temperatura em celcius é: %2.f", celcius);
    return 0;

}