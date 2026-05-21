#include <stdio.h>


// Função para exibir as linhas
void linha(char tabuleiro[10][10]) {
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }
}

// Função para exibir a coluna
void coluna(char tabuleiro[10][10]) {
    int i, j;
    
    // Imprime cabeçalho das colunas (A a J)
    printf("  "); // Espaço para alinhar com os números das linhas
    for (j = 0; j < 10; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");
    
    // Imprime linhas numeradas e conteúdo
    for (i = 0; i < 10; i++) {
        printf("%d", i + 1); // Número da linha (1 a 10)
        for (j = 0; j < 10; j++) {
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    char tabuleiro[10][10];
    
    linha(tabuleiro);
    coluna(tabuleiro);
    
    return 0;
}