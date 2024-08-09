#include <stdio.h>
#include <string.h>

// Definição da estrutura Atleta
typedef struct {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
} Atleta;
 
 // Função para ordenar os atletas por idade (do mais velho para o mais novo)
void ordenarPorIdade(Atleta atletas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (atletas[i].idade < atletas[j].idade) {
                // Troca os atletas
                Atleta temp = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = temp;
            }
        }
    }
}

int main() {
    Atleta atletas[5];

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

    // Ordena os atletas por idade (do mais velho para o mais novo)
    ordenarPorIdade(atletas, 5);

    // Exibe os atletas ordenados por idade
    printf("\nAtletas ordenados por idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s, Esporte: %s, Idade: %d, Altura: %.2f metros\n",
               atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    return 0;
}
