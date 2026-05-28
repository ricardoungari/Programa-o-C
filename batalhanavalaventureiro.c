#include <stdio.h>
#define linha 10
#define coluna 10

int main() {
    int tabuleiro[coluna][linha];

    
    // Iniciar tabuleiro 
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (i + j == 2) { 
                tabuleiro[i][j] = '3';
            } else {
               tabuleiro[i][j] = '0';
            }
        }
    }
    
    
    // Coluna de A-J
    printf("   "); // 3 espaços para alinhar a coluna
    for (int j = 0; j < coluna; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    
    // Linhas
    for (int i = 0; i < linha; i++) {
        printf("%2d ", i + 1); // %2d para alinhar o 10 por ocupar 2 espaços
        for (int j = 0; j < coluna; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}