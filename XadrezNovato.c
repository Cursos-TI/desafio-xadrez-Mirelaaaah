#include <stdio.h>

int main() {

    // Declaração das variaveis das peças que serão movimentadas.
    
    int Torre = 1;
    int Bispo = 1;
    int Rainha;

    // Primeira peça será a Torre com o uso do While.

    while (Torre <= 5)
    {
        printf("A Torre está se movendo verticalmente para a direita...\n");
        Torre++;
    }

    // Segunda peça será o Bispo com o uso do Do-While.
    
    do
    {
        printf("O Bispo está se movendo para cima e a direita...\n");
        Bispo++;

    } while (Bispo <= 5);

    // Terceira peça será a Rainha com o uso do For.

    for (Rainha = 1; Rainha <= 8; Rainha++)
    {
        printf("A Rainha está se movendo verticalmente para a esquerda...\n");
    }
    

    return 0;
}
