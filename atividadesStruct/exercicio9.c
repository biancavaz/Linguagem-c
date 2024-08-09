#include <stdio.h>
#include <string.h>

// Definição da estrutura Atleta
typedef struct {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

// Função para comparar a altura de dois atletas
Atleta atletaMaisAlto(Atleta a1, Atleta a2) {
    return (a1.altura > a2.altura) ? a1 : a2;
}

// Função para comparar a idade de dois atletas
Atleta atletaMaisVelho(Atleta a1, Atleta a2) {
    return (a1.idade > a2.idade) ? a1 : a2;
}

int main() {
    Atleta atletas[5];
    Atleta maisAlto, maisVelho;

    // Leitura dos dados dos atletas
    printf("Digite os dados de 5 atletas (nome esporte idade altura):\n");
    for (int i = 0; i < 5; i++) {
        printf("Atleta %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]%*c", atletas[i].nome); // Lê o nome com espaços
        printf("Esporte: ");
        scanf(" %[^\n]%*c", atletas[i].esporte); // Lê o esporte com espaços
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura (em metros): ");
        scanf("%f", &atletas[i].altura);
    }

    // Inicializa maisAlto e maisVelho com o primeiro atleta
    maisAlto = atletas[0];
    maisVelho = atletas[0];

    // Determina o atleta mais alto e o mais velho
    for (int i = 1; i < 5; i++) {
        maisAlto = atletaMaisAlto(maisAlto, atletas[i]);
        maisVelho = atletaMaisVelho(maisVelho, atletas[i]);
    }

    // Exibe os resultados
    printf("O atleta mais alto é: %s\n", maisAlto.nome);
    printf("O atleta mais velho é: %s\n", maisVelho.nome);

    return 0;
}
