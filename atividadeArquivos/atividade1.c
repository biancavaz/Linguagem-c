#include <stdio.h>
#include <string.h>

int main () {

    FILE *arq;
    char text[200]; // Array para armazenar o conteúdo do arquivo
    char letra = '\n'; // Caracter usado para contar as linhas (nova linha)
    int vezes; // Contador de linhas
    
   // Abre o arquivo "teste.txt" no modo de escrita
    arq = fopen("teste.txt","w");

    // escreve dentro do arquivo
    fprintf(arq, "olá, andré!");

        // Lê o conteúdo do arquivo para o array 'text'
        fread (&text, sizeof(char), 200, arq);

        // Conta o número de ocorrências de nova linha no texto
        for (int i = 0; i < strlen(text); i++){
            if(text[i] == letra){
                vezes++;
            }
        }

    // Exibe o número de linhas
    printf("\nLinhas: %i\n",vezes + 1);

    // Fecha o arquivo
    fclose(arq);

}