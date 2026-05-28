#include <stdio.h>
#include <stdlib.h>

#define LINHA 10
#define COLUNA 10

int main() {
    char tabuleiro[LINHA][COLUNA];
    int i, j;

    // Inicializa tabuleiro com '0'
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = '0' ;
        }
    }

    // Impressão do cone
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            if ();
            tabuleiro[i][j] = '1';
        }


    // Impressão do tabuleiro com cabeçalhos
    printf("   ");
    for (j = 0; j < COLUNA; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    for (i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < COLUNA; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}