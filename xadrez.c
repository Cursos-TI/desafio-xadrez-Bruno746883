#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    /* ===== TORRE (Recursivo) ===== */
void moverTorre(int casas) {
    if(casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* ===== RAINHA (Recursivo) ===== */
void moverRainha(int casas) {
    if(casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* ===== BISPO (Recursivo + loop interno) ===== */
void moverBispo(int vertical) {
    if(vertical == 0) return;

    /* loop interno (horizontal) */
    for(int i = 0; i < 1; i++) {
        printf("Cima Direita\n");
    }

    moverBispo(vertical - 1);
}

/* ===== CAVALO (loops complexos) ===== */
void moverCavalo() {

    int movimentos = 0;

    for(int i = 0; i < 3; i++) {

        if(i < 2) {
            printf("Cima\n");
            movimentos++;
            continue;
        }

        if(i == 2) {
            printf("Direita\n");
            movimentos++;
        }

        if(movimentos == 3) {
            break;
        }
    }
}

int main() {

    /* ===== TORRE ===== */
    printf("Movimento da Torre:\n");
    moverTorre(5);

    /* ===== BISPO ===== */
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    /* ===== RAINHA ===== */
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    /* ===== CAVALO ===== */
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
