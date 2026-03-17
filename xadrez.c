#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Aventureiro - Movimentação do Cavalo
    int main() {

    int i;

    /* ===== TORRE (for) ===== */
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    /* ===== BISPO (while) ===== */
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    /* ===== RAINHA (do-while) ===== */
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    /* ===== CAVALO (loops aninhados) ===== */
    printf("\nMovimento do Cavalo:\n");

    int baixo = 2;
    int esquerda = 1;

    int x, y;

    for(x = 1; x <= baixo; x++) {
        printf("Baixo\n");
    }

    y = 1;
    while(y <= esquerda) {
        printf("Esquerda\n");
        y++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
