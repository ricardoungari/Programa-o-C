#include <stdio.h>

int main() {
    char tabuleiro[10][10];
    int i, j;
    
    // Iniciar tabuleiro com 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }
    
    // Navio
    tabuleiro[2][1] = '3'; // B-3
    tabuleiro[2][2] = '3'; // C-3
    tabuleiro[2][3] = '3'; // D-3
    
    // Coluna de A-J
    printf("   "); // 3 espaços para alinhar a coluna
    for (j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    
    // Linhas
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // %2d para alinhar o 10, por ocupar 2 espaços
        for (j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}