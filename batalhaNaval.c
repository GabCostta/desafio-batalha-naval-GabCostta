#include <stdio.h>

#define SIZE 5  // Tamanho do tabuleiro

int main() {
    // Inicializando o tabuleiro vazio
    int tabuleiro[SIZE][SIZE] = {0};

    // Coordenadas e tamanhos dos navios
    int navio_vertical_x = 1, navio_vertical_y = 1, navio_vertical_tamanho = 3;
    int navio_horizontal_x = 3, navio_horizontal_y = 0, navio_horizontal_tamanho = 4;

    // Posicionando o navio vertical
    for (int i = 0; i < navio_vertical_tamanho; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1;
    }

    // Posicionando o navio horizontal
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < navio_vertical_tamanho; i++) {
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + i);
    }

    // Exibindo o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
