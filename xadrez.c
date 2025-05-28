#include <stdio.h>

// --- Recursivo: TORRE (direita) ---
void movimentoTorre(int atual, int max_movimento) {
    if (atual > max_movimento) return;
    printf("Direita\n");
    movimentoTorre(atual + 1, max_movimento);
}

// --- Recursivo: BISPO (diagonal cima-direita) ---
void movimentoBispo(int atual, int max_movimento) {
    if (atual > max_movimento) return;
    printf("Cima\n");
    printf("Direita\n");
    movimentoBispo(atual + 1, max_movimento);
}

// --- Recursivo: RAINHA (esquerda) ---
void movimentoRainha(int atual, int max_movimento) {
    if (atual > max_movimento) return;
    printf("Esquerda\n");
    movimentoRainha(atual + 1, max_movimento);
}

// --- BISPO (loops aninhados: vertical -> horizontal, diagonal cima-direita) ---
void bispoLoopsAninhados(int max_movimento) {
    for (int y = 1; y <= max_movimento; y++) { // Vertical
        for (int x = 1; x <= max_movimento; x++) { // Horizontal
            if (x == y) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

// --- Cavalo: movimentos em "L" usando loops complexos ---
void movimentoCavalo(int tentativas) {
    for (int i = 0; i < tentativas; i++) {
        int casasVerticais = 2;
        int casasHorizontais = 1;

        for (int v = 0; v < casasVerticais; v++) {
            printf("Cima\n");
        }

        for (int h = 0; h < casasHorizontais; h++) {
            printf("Direita\n");
        }

        printf("---\n"); // Separador visual pra cada movimento completo do cavalo
    }
}


int main() {
    const int MAX_MOV_TORRE = 5;
    const int MAX_MOV_BISPO = 3;
    const int MAX_MOV_RAINHA = 8;

    printf("Movimentos da TORRE:\n");
    movimentoTorre(1, MAX_MOV_TORRE);
    printf("\n");

    printf("Movimentos do BISPO (Recursivo):\n");
    movimentoBispo(1, MAX_MOV_BISPO);
    printf("\n");

    printf("Movimentos do BISPO (Loops Aninhados):\n");
    bispoLoopsAninhados(MAX_MOV_BISPO);
    printf("\n");

    printf("Movimentos da RAINHA:\n");
    movimentoRainha(1, MAX_MOV_RAINHA);
    printf("\n");

    printf("Movimentos do CAVALO:\n");
    const int MOV_CAVALO = 1; // Quantas vezes o cavalo fará o movimento "em L"
    movimentoCavalo(MOV_CAVALO);
    printf("\n");

    return 0;
}
