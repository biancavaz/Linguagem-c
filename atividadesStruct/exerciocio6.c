#include <stdio.h>

// Definindo a estrutura para armazenar informações do aluno
typedef struct {
    int matricula;
    char nome[100];
    float notas[3];
} Aluno;

// Função para calcular a média das notas de um aluno
float calcularMedia(Aluno a) {
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3.0;
}

int main() {
    Aluno alunos[5];
    int i;
    int indexMelhorAluno = 0;
    float maiorMedia = 0.0;

    // Leitura dos dados dos alunos
    for (i = 0; i < 5; i++) {
        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        // Limpa o buffer do teclado antes de ler uma string
        getchar(); // Consumir o '\n' que sobra do scanf
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        // Remove o '\n' do final da string lida
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite as notas das 3 provas do aluno %d: ", i + 1);
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);

        // Calcula a média do aluno e verifica se é a maior
        float mediaAtual = calcularMedia(alunos[i]);
        if (mediaAtual > maiorMedia) {
            maiorMedia = mediaAtual;
            indexMelhorAluno = i;
        }
    }

    // Exibe o nome e as notas do aluno com a maior média
    printf("\nAluno com a maior média:\n");
    printf("Nome: %s\n", alunos[indexMelhorAluno].nome);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[indexMelhorAluno].notas[0], alunos[indexMelhorAluno].notas[1], alunos[indexMelhorAluno].notas[2]);

    return 0;
}
