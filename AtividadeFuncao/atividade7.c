#include <stdio.h>

int funcao (int horas, int minutos, int segundos) {
    return (horas *3600) + (minutos * 60) + segundos;
}

int main () {

    int horas, minutos, segundos, totalSegundos;

    printf("informe a Hora: ");
    scanf("%i", &horas);

    printf("informe os minutos: ");
    scanf("%i", &minutos);

    printf("informe os segundos: ");
    scanf("%i", &segundos);

    totalSegundos = funcao(horas, minutos, segundos);

    printf("O total de segundos que tem é: %d", totalSegundos);

}