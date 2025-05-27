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
    const int MAX_MOVES_BISPO = 9; // Bispo pode se mover até 5 casas em diagonal (O Bispo só pode se mover até 5 casas em uma direção, consideranco que ele se move em diagonal mas o movimento não é linear é "curvado" o total de movimentos é 9)
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


//Jogo Xadrez Aventureiro, ....