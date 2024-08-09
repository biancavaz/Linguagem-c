#include <stdio.h>

// Definição da estrutura Hora
typedef struct {
    int hora;
    int minuto;
    int segundo;
} Hora;

// Função para comparar duas horas e retornar a maior
Hora maiorHora(Hora h1, Hora h2) {
    if (h1.hora > h2.hora) return h1;
    if (h1.hora < h2.hora) return h2;

    if (h1.minuto > h2.minuto) return h1;
    if (h1.minuto < h2.minuto) return h2;

    if (h1.segundo > h2.segundo) return h1;
    return h2;  // Se são iguais, retorna qualquer uma delas
}

int main() {
    Hora horas[5];
    Hora maior;

    // Leitura das horas
    printf("Digite 5 horas (hora minuto segundo):\n");
    for (int i = 0; i < 5; i++) {
        printf("Hora %d: ", i + 1);
        scanf("%d %d %d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }

    // Inicializa a maior hora com a primeira do vetor
    maior = horas[0];

    // Encontra a maior hora
    for (int i = 1; i < 5; i++) {
        maior = maiorHora(maior, horas[i]);
    }

    // Imprime a maior hora
    printf("A maior hora é: %02d:%02d:%02d\n", maior.hora, maior.minuto, maior.segundo);

    return 0;
}
