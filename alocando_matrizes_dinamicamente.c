#include <stdio.h>
#include <stdlib.h>

int main() {
    char** letras; // Criando um ponteiro para um array de ponteiros (matriz de strings)
    int linhas;
    int colunas;

    // Abrindo o arquivo
    FILE* f;
    f = fopen("letras.txt", "r");

    // Lendo o número de linhas e colunas a serem lidas do arquivo txt
    fscanf(f, "%d %d", &linhas, &colunas);

    // Alocando memória para o ponteiro baseado no número de linhas
    letras = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++) {
        letras[i] = malloc(sizeof(char) * (colunas + 1)); // +1 para o caractere nulo
    }

    // Lendo cada linha como uma string
    for (int i = 0; i < linhas; i++) {
        fscanf(f, "%s", letras[i]);
    }

    // Exibindo as strings lidas
    for (int i = 0; i < linhas; i++) {
        printf("%s\n", letras[i]);
    }

    // Fechando o arquivo
    fclose(f);

    // Liberando cada espaço alocado para as strings
    for (int i = 0; i < linhas; i++) {
        free(letras[i]);
    }

    // Liberando o espaço do ponteiro que armazena os ponteiros das strings
    free(letras);
}