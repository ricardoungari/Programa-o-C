#include <stdio.h>

int main() {
    char tabuleiro[10][10];
    int i, j;
    
    // Iniciar tabuleiro 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i == j) { //diagonal superior esquerda até inferior direita ****** if (i + j = 9) //diagonal superior esquerda ate inferior direita.
                tabuleiro[i][j] = '3';
            } else {
               tabuleiro[i][j] = '0';
            }
        }
    }
    
    
    // Coluna de A-J
    printf("   "); // 3 espaços para alinhar a coluna
    for (j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    
    // Linhas
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // %2d para alinhar o 10 por ocupar 2 espaços
        for (j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}