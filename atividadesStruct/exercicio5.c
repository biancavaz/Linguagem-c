#include <stdio.h>
#include <stdbool.h>

// Definindo a estrutura para um ponto
typedef struct {
    float x;
    float y;
} Ponto;

// Definindo a estrutura para um retângulo
typedef struct {
    Ponto cantoInferiorEsquerdo;
    Ponto cantoSuperiorDireito;
} Retangulo;

// Função para verificar se um ponto está dentro do retângulo
bool pontoDentroRetangulo(Ponto p, Retangulo r) {
    return (p.x >= r.cantoInferiorEsquerdo.x &&
            p.x <= r.cantoSuperiorDireito.x &&
            p.y >= r.cantoInferiorEsquerdo.y &&
            p.y <= r.cantoSuperiorDireito.y);
}

int main() {
    Retangulo r;
    Ponto p;

    // Leitura dos dados do retângulo
    printf("Digite as coordenadas do canto inferior esquerdo do retângulo (x y): ");
    scanf("%f %f", &r.cantoInferiorEsquerdo.x, &r.cantoInferiorEsquerdo.y);

    printf("Digite as coordenadas do canto superior direito do retângulo (x y): ");
    scanf("%f %f", &r.cantoSuperiorDireito.x, &r.cantoSuperiorDireito.y);

    // Leitura das coordenadas do ponto
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &p.x, &p.y);

    // Verificação se o ponto está dentro do retângulo
    if (pontoDentroRetangulo(p, r)) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto está fora do retângulo.\n");
    }

    return 0;
}
