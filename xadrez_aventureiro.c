//Jogo Xadrez Novato, movimentos básicos de Torre, Bispo e Rainha.

#include <stdio.h>
int main() {
    
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int MAX_MOVES_TORRE = 5;   // Torre pode se mover até 5 casas na horizontal ou vertical
    const int MAX_MOVES_BISPO = 9; // Bispo pode se mover até 5 casas em diagonal
    const int MAX_MOVES_RAINHA = 8;  // Rainha pode se mover até 8 casas em qualquer direção

    int bispo = 0; // Inicializando a variável Bispo
    int rainha = 0; // Inicializando a variável Rainha


    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int torre = 0; torre < MAX_MOVES_TORRE; torre++)
    {
        printf("Torre se moveu %d casas para a direita.\n", torre + 1);
    }
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação do Bispo
    // Simulando a movimentação do Bispo em diagonal
    printf("Movimentação do Bispo:\n");
    do
    { printf("Bispo se moveu:\n");

            if (bispo % 2 == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        bispo++; // Incrementando o movimento do Bispo
    } while (bispo <= MAX_MOVES_BISPO);
    printf("Bispo Moveu 5 Casas na Diagonal\n");
    

printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    while (rainha < MAX_MOVES_RAINHA) // Corrigido para uma condição válida
    {
        printf("Rainha se moveu %d casas para esquerda.\n", rainha + 1);
        rainha++; // Incrementando o movimento da Rainha
        if (rainha >= MAX_MOVES_RAINHA) {
            break; // Parar quando atingir o máximo de movimentos da Rainha
        }
    }
    
    return 0;
}