// #include <stdio.h>

// // Desafio de Xadrez - MateCheck
// // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// int main() {
//     // Nível Novato - Movimentação das Peças
//     // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

//     // Implementação de Movimentação do Bispo
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

//     // Implementação de Movimentação da Torre
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

//     // Implementação de Movimentação da Rainha
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

//     // Nível Aventureiro - Movimentação do Cavalo
//     // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
//     // Um loop pode representar a movimentação horizontal e outro vertical.

//     // Nível Mestre - Funções Recursivas e Loops Aninhados
//     // Sugestão: Substitua as movimentações das peças por funções recursivas.
//     // Exemplo: Crie uma função recursiva para o movimento do Bispo.

//     // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
//     // Inclua o uso de continue e break dentro dos loops.

//     return 0;
// }



//Jogo Xadrez Novato, movimentos básicos de Torre, Bispo e Rainha.

#include <stdio.h>
int main() {
    
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int MAX_MOVES_TORRE = 5;   // Torre pode se mover até 5 casas na horizontal ou vertical
    const int MAX_MOVES_BISPO = 5; // Bispo pode se mover até 5 casas em diagonal
    const int MAX_MOVES_RAINHA = 8;  // Rainha pode se mover até 8 casas em qualquer direção
    const int MAX_MOVES_CAVALO = 3;  // Cavalo pode se mover em L, até 3 casas em cada direção

    // Inicializando variáveis para movimentação das peças

    int bispo = 0; // Inicializando a variável Bispo
    int rainha = 0; // Inicializando a variável Rainha
    int cavalo = 0; // Inicializando a variável Cavalo

    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int torre = 0; torre < MAX_MOVES_TORRE; torre++)// Inicializando variável Torre e Condição para movimentar a Torre com incremento
    {
        printf("Torre moveu: %d casas Horizontal para a direita.\n", torre + 1);
    }
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação do Bispo
    // Simulando a movimentação do Bispo em diagonal
    printf("Movimentação do Bispo:\n");
    do
    { printf("Bispo se moveu: %d casas em diagonal cima-direita\n", bispo + 1);
        bispo++; // Incrementando o movimento do Bispo
    } while (bispo < MAX_MOVES_BISPO);   // Condição para movimentar o Bispo

    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade

    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    while (rainha < MAX_MOVES_RAINHA) // Condição para movimentar a rainha
    {
        printf("Rainha se moveu: %d casas Horizontal para a esquerda.\n", rainha + 1);
        rainha++; // Incrementando o movimento da Rainha
    }

    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade

    // Nível Aventureiro - Movimentação do Cavalo

    //Implementação de Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    // Utilizando um loop aninhado com do-while e for para simular a movimentação do Cavalo
    do {
        // Impressao dentro do laço for
        for (int i = 0; i < MAX_MOVES_CAVALO; i++) { // só 3 movimentos: 2 baixo + 1 esquerda
            if (i < MAX_MOVES_CAVALO - 1) {
                printf("Cavalo se moveu: 1 casa para baixo.\n");
            } else {
                printf("Cavalo se moveu: 1 casa para esquerda.\n");
            }
        }
        cavalo++;
    } while (cavalo < MAX_MOVES_CAVALO -2);
    
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade

    return 0;
}