#include <stdio.h>

// Função recursiva para movimentar a Torre (verticalmente para a direita)

void moverTorre(int passo) {
    if (passo > 5) return;
    printf("A Torre está se movendo verticalmente para a direita (passo %d)...\n", passo);
    moverTorre(passo + 1);
}

// Função recursiva para movimentar a Rainha (verticalmente para a esquerda)

void moverRainha(int passo) {
    if (passo > 8) return;
    printf("A Rainha está se movendo verticalmente para a esquerda (passo %d)...\n", passo);
    moverRainha(passo + 1);
}

// Função recursiva para o Bispo (com loop aninhado dentro da recursão)

void moverBispo(int vertical) {
    if (vertical > 5) return;

    printf("Movimento vertical do Bispo %d:\n", vertical);

    for (int horizontal = 0; horizontal < 1; horizontal++) {
        printf("O Bispo está se movendo na horizontal...\n");
    }

    moverBispo(vertical + 1);
}

int main() {
    
    moverTorre(1); // Movimentar a Torre

    
    moverBispo(1); // Movimentar o Bispo

    
    moverRainha(1); // Movimentar a Rainha

    // Movimentar o Cavalo com for aninhado e break

    for (int coluna = 0; coluna < 1; coluna++) {

        for (int linha = 1; linha > 0; linha--) {

            // Movimento em L: 2 para cima (coluna) e 1 para direita (linha)

            printf("O Cavalo está se movendo em L: duas casas para cima...\n");

            if (coluna == 3 && linha == 2) break;
        }

        printf("O Cavalo está se movendo em L: uma casa para a direita...\n");
    }

    return 0;
}