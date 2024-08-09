#include <stdio.h>
#include <string.h>

// Definição da estrutura Pessoa
typedef struct {
    char nome[100];
    int dia;
    int mes;
    int ano;
} Pessoa;

// Função para comparar duas datas
// Retorna 1 se a primeira data for mais recente, -1 se for mais antiga, e 0 se forem iguais
int compararDatas(Pessoa p1, Pessoa p2) {
    if (p1.ano > p2.ano) return 1;
    if (p1.ano < p2.ano) return -1;
    if (p1.mes > p2.mes) return 1;
    if (p1.mes < p2.mes) return -1;
    if (p1.dia > p2.dia) return 1;
    if (p1.dia < p2.dia) return -1;
    return 0;
}

int main() {
    Pessoa pessoas[6];
    Pessoa maisNova, maisVelha;

    // Leitura dos dados das pessoas
    printf("Digite os dados de 6 pessoas (nome dia mes ano):\n");
    for (int i = 0; i < 6; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]%*c", pessoas[i].nome); // Lê o nome com espaços
        printf("Dia: ");
        scanf("%d", &pessoas[i].dia);
        printf("Mês: ");
        scanf("%d", &pessoas[i].mes);
        printf("Ano: ");
        scanf("%d", &pessoas[i].ano);
    }

    // Inicializa maisNova e maisVelha com a primeira pessoa
    maisNova = pessoas[0];
    maisVelha = pessoas[0];

    // Determina a pessoa mais nova e a mais velha
    for (int i = 1; i < 6; i++) {
        if (compararDatas(pessoas[i], maisNova) > 0) {
            maisNova = pessoas[i];
        }
        if (compararDatas(pessoas[i], maisVelha) < 0) {
            maisVelha = pessoas[i];
        }
    }

    // Exibe os resultados
    printf("A pessoa mais nova é: %s\n", maisNova.nome);
    printf("A pessoa mais velha é: %s\n", maisVelha.nome);

    return 0;
}
